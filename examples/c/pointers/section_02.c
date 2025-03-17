#include <stdio.h>

int main(){
  int x = 42;
  int* p = &x;
  printf("x = %d\n", x);
  printf("p = %p\n", p);
  printf("p is pointing at %d\n", *p);

  *p = 50;
  printf("x = %d\n", x);
  printf("p = %p\n", p);
  printf("p is pointing at %d\n", *p);

  return 0;
}
