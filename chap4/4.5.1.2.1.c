int buf[6] = {10, 20, 30, 40, 50, 60};
int main() { 
  int i, sum=0;
  for (i=0; i<6; i++)
    sum+=buf[i];
  return sum;
}
