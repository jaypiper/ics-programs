void swap(int v[ ], int k) {
  int temp;
  temp = v[k];
  v[k] = v[k+1];
  v[k+1] = temp;
}


void sort(int v[ ], int n) {
  int i, j;
  for (i=0; i<n; i++) 
    for (j=i-1; j>=0 && v[j] > v[j+1]; j--) {
      swap(v, j) ;
    }
}

int main() {
  int v[] = {3,2,1};
  sort(v, sizeof(v)/sizeof(int));
  return 0;
}