#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  struct Node* next_ptr;
  struct Node* prev_ptr;
  double value;
} Node;

typedef struct LinkedList{
  Node* start_ptr;
  int size;
} LinkedList;


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
  //printf("sizeof(int) = %ld\n", sizeof(int));
  //printf("sizeof(double) = %ld\n", sizeof(double));
  //printf("sizeof(int*) = %ld\n", sizeof(int*));
  //printf("sizeof(Node) = %ld\n", sizeof(Node));
  return 0;
}
