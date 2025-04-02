#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  for(int i = 0; i < argc; i++){
    printf("[%d] %s\n", i, argv[i]);
  }
  if(argc < 2){
    printf("Error! Expected at least one command line argument!\n");
    return 1;
  }
  for(int j = 0; j < atoi(argv[1]); j++){
    printf("%d\n", j);
  }
  return 0;
}
