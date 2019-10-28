#include <stdio.h>
#include <stdlib.h>
#include "header.h"

struct node * insert_front(struct node *nody, int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->i = data;
    newNode->next = nody;
    return newNode;
}

struct node *remove_node(struct node *front, int data){
  if(front->i == data){
      struct node *returner = front->next;
      free(front);
      return returner;
  }

  struct node *currentNode = front;
  while(currentNode->next){
    if(currentNode->next->i == data){
        struct node *deadNode = currentNode->next;
        if(currentNode->next->next)
          currentNode->next = currentNode->next->next;
        else
          currentNode->next = NULL;
        free(deadNode);
        return front;
    }
    currentNode = currentNode->next;
  }
  return front;
}
struct node * free_list(struct node *list){
  while(list != NULL){
    printf("freeing node: %d\n",list->i);
    list = remove_node(list,list->i);
  }
  return list;
}
void print_list(struct node *nody){
    printf("Printing list: [ ");
    if(nody != NULL){
      while(nody->next){
        printf("%d ", nody->i);
        nody = nody->next;
      }
      printf("%d ", nody->i);
    }
    printf("]\n");
}
