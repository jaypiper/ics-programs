#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
int main() {
	void *handle;
	void (*myfunc1)();
	char *error; 

  /* 动态装入包含函数myfunc1()的共享库文件 */
  handle = dlopen("./mylib.so", RTLD_LAZY);
  if (!handle) {
    fprintf(stderr, "%s\n", dlerror());
    exit(1);
  }

  /* 获得一个指向函数myfunc1()的指针myfunc1*/
  myfunc1 = dlsym(handle, "myfunc1");
  if ((error = dlerror()) != NULL) {
    fprintf(stderr, "%s\n", error);
    exit(1);
  }

  /* 现在可以像调用其他函数一样调用函数myfunc1() */
  myfunc1();

  /* 关闭（卸载）共享库文件 */
  if (dlclose(handle) < 0) {
    fprintf(stderr, "%s\n", dlerror());
    exit(1);
  }
  return 0;
}
