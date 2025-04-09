#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int value;
  struct Node* next_ptr;
  struct Node* prev_ptr;
} Node;

typedef struct LinkedList{
  int size;
  Node* head_ptr;
} LinkedList;

LinkedList* MakeList();

void PrintList(LinkedList* list_ptr);

void FreeList(LinkedList* list_ptr);

void AddNode(LinkedList* list_ptr, int val);
