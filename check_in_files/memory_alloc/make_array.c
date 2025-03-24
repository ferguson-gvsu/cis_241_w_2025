#include <stdio.h>

// YOU DO NOT NEED TO CHANGE MAIN
// We'll learn the user input in class soon!
int main(){
  int length;

  while(scanf("%d", &length) != EOF){
    int* arr = CreateArray(length);
    for(int i = 0; i < length; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
  }
  return 0;
}
