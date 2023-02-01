int nn_sum (int n) {
	int i;
	int result=0;	
	for (i=1; i<=n; i++)  
	  result+=i;   
	return result;
}

int main() {
  nn_sum(5);
  return 0;
}