#include "linked_list.h"

int main(){
  LinkedList* list_ptr = MakeList();
  PrintList(list_ptr);
  AddNode(list_ptr, 7);
  PrintList(list_ptr);
  AddNode(list_ptr, 12);
  PrintList(list_ptr);
  for(int i = 0; i < 10; i++){
    AddNode(list_ptr, i);
    PrintList(list_ptr);
  }

  FreeList(list_ptr);
  free(list_ptr);
}
