#include <stdio.h>
#include <stdlib.h>

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node{
  struct Node* next_ptr;
  struct Node* prev_ptr;
  double value;
} Node;

typedef struct LinkedList{
  Node* start_ptr;
  int size;
} LinkedList;


void AddNode(LinkedList* list_ptr, double val);

void PrintList(LinkedList* list_ptr);

void FreeList(LinkedList* list_ptr);

#endif
