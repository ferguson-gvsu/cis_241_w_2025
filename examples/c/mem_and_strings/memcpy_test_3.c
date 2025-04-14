#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* p, int len){
  for(int i = 0; i < len; i++){
    printf("[%d] %d\n", i, p[i]);
  }
}

int main(){
  int* data = (int*)malloc(sizeof(int) * 32);
  int* copy = (int*)malloc(sizeof(int) * 32);

  for(int i = 0; i < 32; i++){
    data[i] = i*i;
  }
 
  printf("data:\n");
  PrintArray(data, 32);
  printf("copy:\n");
  PrintArray(copy, 32);

  char s1[10] = "hello";
  char s2[] = "world";
  strcat(s1, s2);
  
  return 0;
}
