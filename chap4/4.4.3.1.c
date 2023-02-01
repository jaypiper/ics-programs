int get_lowaddr_content(int *p1, int *p2) {	   	
	if ( p1 > p2 )  
	  return *p2;
	else
	  return *p1;		  
} 

int main() {
	int temp1=1 , temp2=2;
	get_lowaddr_content(&temp1, &temp2);
}