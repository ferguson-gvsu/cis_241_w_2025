#include <stdio.h>

int main(){
  int res = 0;
  for(long i = 0; i < (1 << 30); i++){
    res++;
  }
  printf("Result: %d\n", res);
  return 0;
}
