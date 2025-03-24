#include <stdio.h>

void recurse(int n){
  int val = n * n - 1;
  float f = (float)n / 3;
  printf("%d\n", n);
  //if(n >= 10){
  //  int* p = 0;
  //  *p = 5;
  //}
  recurse(n+1);
}

void main(){
  recurse(0);
}
