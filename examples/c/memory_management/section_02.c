#include <stdio.h>
#include <stdlib.h>

void main(){
  int num_items = 1000000;
  int* p = (int*) malloc(sizeof(int) * num_items);
  p = (int*) realloc(p, sizeof(int) * 2 * num_items);
  for(int i = 0; i < 2 * num_items; i++){
    int val = p[i];
    if(val != 0){
      printf("[%d] %d\n", i, val);
    }
  }
  free(p);

  char carr[1000];
  char* c_ptr = carr;
}
