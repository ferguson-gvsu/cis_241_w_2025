#include <stdio.h>

char s[10];
int main(){
  while(1){
    char* res = fgets(s, 10, stdin);  
    printf("received input: %s\n", s);
    if(res == NULL) break;
  }
}
