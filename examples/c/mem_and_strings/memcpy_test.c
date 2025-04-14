#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  int* data = (int*)malloc(sizeof(int) * 5);
  int* copy = (int*)malloc(sizeof(int) * 5);
  int data2[5];
  int* ptr = data2;

  for(int i = 0; i < 5; i++){
    data[i] = i*i;
  }
 
  printf("sizeof(data) = %ld\n", sizeof(data));
  printf("sizeof(*data) = %ld\n", sizeof(*data));
  printf("sizeof(data2) = %ld\n", sizeof(data2));
  printf("sizeof(ptr) = %ld\n", sizeof(ptr));

  memcpy(copy, data, 5 * sizeof(int)); 
  printf("data:\n");
  for(int i = 0; i < 5; i++){
    printf("[%d] %d\n", i, data[i]);
  }
  printf("copy:\n");
  for(int i = 0; i < 5; i++){
    printf("[%d] %d\n", i, copy[i]);
  }
  
  printf("trying weird copy\n"); 
  //memcpy(data, data + 1, 4 * sizeof(int)); 
  for(int i = 0; i < 4; i++){
    data[i+1] = data[i];
  }
  printf("data:\n");
  for(int i = 0; i < 5; i++){
    printf("[%d] %d\n", i, data[i]);
  }

  return 0;
}
