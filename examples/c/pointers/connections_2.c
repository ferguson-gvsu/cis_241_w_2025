#include <stdio.h>

int main(){
  int arr[3] = {5,6,7};
  arr++;
  *arr = 90;

  for(int i = 0; i < 3; i++){
    printf("Index %d: %d\n", i, arr[i]);
  }

  return 0;
}
