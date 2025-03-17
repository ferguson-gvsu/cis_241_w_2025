#include <stdio.h>

int main(){
  int arr[3] = {5,6,7};
  *arr = 20;
  *(arr + 2) = 100;

  for(int i = 0; i < 3; i++){
    printf("Index %d: %d\n", i, arr[i]);
  }

  return 0;
}
