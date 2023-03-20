extern int a[];
int val=0;
int sum() {
  int i;
  for (i=0; i<4; i++)	
    val += a[i];
  return val;
}
