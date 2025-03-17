#include <stdio.h>

int main(){
  int x = 42;
  int* p = &x;
  printf("x=%d; p=%p; *p=%d\n", x, p, *p);
  *p = 50;
  printf("x=%d; p=%p; *p=%d\n", x, p, *p);
  return 0;
}
