#define N 10
long a[N] = {1,2,3,4,5,6,7,8,9,10};

int main() {
  long sum = 0;
  for (int i=0; i<N; i++) sum+=a[i];
  return sum;
}