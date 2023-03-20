#include <stdio.h>
int y=100;
int z;
void p1(void);
int main() {  
  z=1000;
  p1();
  printf("y=%d, z=%d\n", y, z);
  return 0;
}
