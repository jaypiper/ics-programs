#include <stdio.h>
void swap (int x, int y ) {
	int t=x;
	x=y;
	y=t;
}
int main ( ) { 
  int a=15, b=22;
  printf ("a=%d\tb=%d\n", a, b);
  swap (a, b);
  printf ("a=%d\tb=%d\n", a, b);
  return 0;
}

