
#include <stdio.h>
#include <stdlib.h>


struct node { int i;
              struct node *next;
            };
struct node *insert_front(struct node *nody, int data);
struct node *remove(struct node *front, int data);

void print_list(struct node *nody){
    printf("Printing list: [ ");
    while(nody->next){
      printf("%d ", nody->i);
      nody = nody->next;
    }
    printf("%d ", nody->i);
    printf("]\n");
}
int main(){
  struct node *list = malloc(sizeof(struct node));
  list->i = 1;
  list->next = 0;

  list = insert_front(list,99);
  print_list(list);
  return 0;
}
struct node * insert_front(struct node *nody, int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->i = data;
    newNode->next = nody;
    return newNode;
}
struct node * remove(struct node *front, int data){
  currentNode = *front;
  while(currentNode){
    if(currentNode.i == data)
  }
}
