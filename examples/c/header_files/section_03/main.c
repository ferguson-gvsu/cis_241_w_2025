#include "linked_list.h"

int main(){
  LinkedList list;
  list.start_ptr = NULL;
  list.size=0;
  printf("List is size: %d\n", list.size);
  PrintList(&list);
  AddNode(&list, 5.0);
  printf("List is size: %d\n", list.size);
  PrintList(&list);
  AddNode(&list, 7.0);
  printf("List is size: %d\n", list.size);
  PrintList(&list);
  for(int i = 0; i < 20; i++){
    AddNode(&list, i);
    printf("List is size: %d\n", list.size);
    PrintList(&list);
  }
  FreeList(&list);
  return 0;
}
