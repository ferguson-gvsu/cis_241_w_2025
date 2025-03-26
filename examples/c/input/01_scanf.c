#include <stdio.h>

void main(){
  int i;
  while(1){
    int res = scanf(" %d", &i);
    if(res == EOF) break;
    printf("Read in: %d\n", i);
  }
}
