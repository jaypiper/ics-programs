void insertion_sort(int v[ ], int n) {
  int i,j,x;
  for (i=1; i < n; i++) {
    x = v[i];
    for (j = i; j > 0 && v[j-1] > x; j--) {
      v[j] = v[j-1];
    }
    v[j] = x;
  }
}
int main() {
  return 0;
}
