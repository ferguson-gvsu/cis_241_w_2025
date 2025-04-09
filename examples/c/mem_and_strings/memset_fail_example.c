#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int* data = (int*)malloc(sizeof(int) * 32);

  memset(data, 1, 32 * sizeof(int));
  
  for(int i = 0; i < 32; i++){
    printf("%d\n", data[i]);
  }
  printf("Ints on this system are %d bytes\n", sizeof(int));
  return 0;
}
