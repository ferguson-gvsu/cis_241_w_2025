#include "linked_list.h"

void AddNode(LinkedList* list_ptr, double val){
  Node* new_node_ptr = (Node*)malloc(sizeof(Node));
  new_node_ptr->value = val;
  new_node_ptr->next_ptr = NULL;
  new_node_ptr->prev_ptr = NULL;
  if(list_ptr->size == 0){
    list_ptr->start_ptr = new_node_ptr;
    list_ptr->size++;
  }
  else{
    Node* node_ptr = list_ptr->start_ptr;
    while(node_ptr->next_ptr != NULL){
      node_ptr = node_ptr->next_ptr;
    }
    node_ptr->next_ptr = new_node_ptr;
    new_node_ptr->prev_ptr = node_ptr;
    list_ptr->size++;
  }
}

void PrintList(LinkedList* list_ptr){
  Node* node_ptr = list_ptr->start_ptr;
  printf("<");
  if(list_ptr->size > 0){
    while(node_ptr->next_ptr != NULL){
      printf(" %f", node_ptr->value);
      node_ptr = node_ptr->next_ptr;
    }
    printf(" %f", node_ptr->value);
  }
  printf(">\n");
}

void FreeList(LinkedList* list_ptr){
  if(list_ptr->size == 0){
    return;
  }
  Node* node_ptr = list_ptr->start_ptr;
  while(node_ptr->next_ptr != NULL){
    node_ptr = node_ptr->next_ptr;
  }
  while(node_ptr->prev_ptr != NULL){
    node_ptr = node_ptr->prev_ptr;
    free(node_ptr->next_ptr);
  }
  free(node_ptr);

}
