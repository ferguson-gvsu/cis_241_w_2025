#include <stdio.h>
#include <stdlib.h>

void main(){
  while(1){
    char* s = NULL;
    size_t n = 0;
    int res = getline(&s, &n, stdin);
    printf("Loaded %d characters!\n", res);
    printf("Buffer size is now: %ld\n", n);
    printf("Received: %s\n", s);
    free(s);
    if(res == -1) break;
  }
}
