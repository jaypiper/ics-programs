int buf[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int main() { 
  int i, sum=0;
	for (i=0; i<10; i++)
    sum+=buf[i];
	return sum;
}
