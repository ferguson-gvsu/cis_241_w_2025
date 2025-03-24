#include <stdio.h>
#include <stdlib.h>

void main(){
  //double d = 5.2;
  //double* p = &d;
  //int* p2 = (int*)p;
  //*p2 += 1;
  //printf("%f\n", d);
  int num_items = 10000;
  int* p = (int*)malloc(sizeof(int) * num_items);
  for(int i = 0; i < num_items; i++){
    printf("[%d] %d\n", i, p[i]);
  }
}
