#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

struct node{
  struct node* next;
  struct data *dta;
};

struct linkedList{
  struct node* head;
};


struct node* createNode(struct data *dta);
struct linkedList* createLinkedList();
void addFront(struct linkedList *ll,struct data *dta);
void addBack(struct linkedList *ll,struct data *dta);
void removeFront(struct linkedList *ll);
void removeBack(struct linkedList *ll);
int searchLinkedList(struct linkedList *ll,struct data *dta);
void printLinkedList(struct linkedList *ll);
void cleanLinkedList(struct linkedList *ll);
#endif
