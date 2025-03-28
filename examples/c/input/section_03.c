#include <stdio.h>

int main(){
  int i = 100;
  int res = scanf("%d", &i);
  if(res != 1){
    printf("Error!\n");
  }
  else{
    printf("I received: %d\n", i);
  }
  return 0;
}
