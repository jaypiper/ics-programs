#include <stdio.h>
int main () {
  static short num[ ][4]={ {2, 9, -1, 5}, {3, 8, 2, -6}};
  static short *pn[ ]={num[0], num[1]};
  static short s[2]={0, 0};  
  int i, j;
  for (i=0; i<2; i++) {   
    for (j=0; j<4; j++) 
      s[i]+=*pn[i]++;
    printf ("sum of line %d:%d\n",i,s[i]);
  }
}   
