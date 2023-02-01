int nn_sum(int n) {
	int result;	
	if (n<=0)  
	   result=0;   
	else	
	   result=n+nn_sum(n-1); 
	return result;
}

int main() {
  nn_sum(10);
}
