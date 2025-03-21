#include <stdio.h>

int main(){
  long arr[3] = {1,2,3};
  long* p = arr;
  p++;
  *p = 10;
  printf("%ld, %ld, %ld\n", arr[0], arr[1], arr[2]);
  p[-1] = 50;
  printf("%ld, %ld, %ld\n", arr[0], arr[1], arr[2]);
  arr[-1] = 999;
  printf("%ld, %ld, %ld\n", arr[0], arr[1], arr[2]);

  return 0;
}
