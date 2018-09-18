void g(int*);
void f() {
  int* i = new int(17);
  g(i);
  delete i;
}
