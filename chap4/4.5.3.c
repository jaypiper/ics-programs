unsigned float2unsign(float f) {
  union {
    float f;
    unsigned u;
  } tmp_union;
  tmp_union.f=f;
  return tmp_union.u;
}

union node {
  struct {
    int *ptr;
    long data1;
  } node1;
  struct {
    long data2;
    union node *next;
  } node2;
};

void node_proc(union node *np) {
  np->node2.next->node1.data1=*(np->node2.next->node1.ptr)+np->node2.data2;
}


int main() {
  return 0;
}