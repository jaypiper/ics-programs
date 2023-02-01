int switch_test(int a, int b, int c) {
  int result;
  switch(a) {
  case 15:
      c=b&0x0f;
  case 10: 
      result=c+50;
      break;
  case 12:
  case 17:
      result=b+50;
      break;
  case 14:
      result=b;
      break;
  default:
      result=a;
  }
  return result;
}

int main() {
  switch_test(1,2,3);
  return 0;
}
