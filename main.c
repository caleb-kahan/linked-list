#include <stdio.h>
#include <stdlib.h>


struct node { int i;
              struct node *next;
            };
struct node *insert_front(struct node *nody, int data);
struct node *remove_node(struct node *front, int data);
struct node * free_list(struct node *list);
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
int main(){
  struct node *list = malloc(sizeof(struct node));
  list->i = 1;
  list->next = NULL;

  list = insert_front(list,99);
  print_list(list);
  //list = remove_node(list,1);
  list = remove_node(list,99);
  print_list(list);
  //list = remove_node(list,1);
  print_list(list);
  list = insert_front(list,1);
  list = insert_front(list,99);
  print_list(list);
  list = free_list(list);
  print_list(list);
  return 0;
}
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
  while(currentNode){
    if(currentNode->next->i == data){
        struct node *deadNode = currentNode->next;
        currentNode->next = currentNode->next->next;
        free(deadNode);
        return front;
    }
    currentNode = currentNode->next;
  }
  return front;
}
struct node * free_list(struct node *list){
  while(list != NULL){
    list = remove_node(list,list->i);
  }
  return list;
}
