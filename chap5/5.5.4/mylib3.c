static int a;
extern int b;
extern void ext();
void foo() {
  bar();
  ext();
}