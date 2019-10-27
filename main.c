#include <stdio.h>
#include <stdlib.h>
#include "header.h"

struct node { int i;
              struct node *next;
            };

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
