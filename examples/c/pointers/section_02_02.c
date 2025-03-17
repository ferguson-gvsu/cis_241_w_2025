#include <stdio.h>

int main(){
  int i = 100;
  int arr[100];
  int* p = &i;
  printf("Step 1\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 

  printf("Step 2\n");
  i = i + 5;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 
  printf("Step 3\n");
  *p += 6;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 

  printf("Step 4\n");
  p += 1;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 
  printf("Step 5\n");
  i--;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 
  printf("Step 6\n");
  *p = *p * 2;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 


  printf("Step 7\n");
  p--;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 
  printf("Step 8\n");
  *p = 0;
  printf("i=%d; p=%p; *p=%d\n", i, p, *p); 

  return 0;
}
