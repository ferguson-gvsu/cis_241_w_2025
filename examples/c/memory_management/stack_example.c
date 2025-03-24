#include <stdio.h>

void recurse(int n){
  int two_times = 2 * n;
  float half = n / 2.0;
  printf("Before: %d\n", n);
  if(n < 10) recurse(n+1);
  if(n == 10){
    int* p = 0;
    *p = 5;
  }
  printf("After: %d\n", n);
}

void main(){
  int n = 0;
  float f = 42;
  recurse(0);
}
