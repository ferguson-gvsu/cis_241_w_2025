#include <stdio.h>

int* MakeInt(){
  int x = 10;
  return &x;
}

void main(){
  int* p = MakeInt();
  *p = 5;
}
