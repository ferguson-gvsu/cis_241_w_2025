#include "linked_list.h"

LinkedList* MakeList(){
  LinkedList* list_ptr = (LinkedList*)malloc(sizeof(LinkedList));
  list_ptr->size = 0;
  list_ptr->head_ptr = NULL;
  return list_ptr;
}

void PrintList(LinkedList* list_ptr){
  printf("<");
  if(list_ptr->size > 0){
    Node* node_ptr = list_ptr->head_ptr;
    while(node_ptr->next_ptr != NULL){
      printf(" %d", node_ptr->value);
      node_ptr = node_ptr->next_ptr;
    }
    printf(" %d", node_ptr->value);
  }
  printf(">\n");
}

void FreeList(LinkedList* list_ptr){
  if(list_ptr->size > 0){
    Node* node_ptr = list_ptr->head_ptr;
    while(node_ptr->next_ptr != NULL){
      node_ptr = node_ptr->next_ptr;
    }
    while(node_ptr->prev_ptr != NULL){
      node_ptr = node_ptr->prev_ptr;
      free(node_ptr->next_ptr);
    }
    free(node_ptr);
  }
}

void AddNode(LinkedList* list_ptr, int val){
  Node* new_node_ptr = (Node*)malloc(sizeof(Node));
  new_node_ptr->value = val;
  new_node_ptr->next_ptr = NULL;
  new_node_ptr->prev_ptr = NULL;
  if(list_ptr->size == 0){
    list_ptr->head_ptr = new_node_ptr;
    list_ptr->size++;
  }
  else{
    Node* node_ptr = list_ptr->head_ptr;
    while(node_ptr->next_ptr != NULL){
      node_ptr = node_ptr->next_ptr;
    }
    node_ptr->next_ptr = new_node_ptr;
    new_node_ptr->prev_ptr = node_ptr;
  }
}
