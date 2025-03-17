#include <stdio.h>

int main(){
  int arr[4] = {4, 12, 7, 8};
  int x = 0;
  // This walks off the end of the array! Don't do that!
  // Should be i < 4 instead (no equals)
  for(int i = 0; i <= 4; x++){
    printf("x = %d\n", arr[i]); 
  }
}
