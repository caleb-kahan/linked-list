#include "header.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
  struct node *list = NULL;
  print_list(list);
  printf("Adding #s 0-9 to list.\n");
  int i;
  for(i=0;i<10;i++){
    list = insert_front(list,i);
  }
  print_list(list);
  printf("Removing 9:\n");
  list = remove_node(list,9);
  print_list(list);
  printf("Removing 4:\n");
  list = remove_node(list,4);
  print_list(list);
  printf("Removing 0:\n");
  list = remove_node(list,0);
  print_list(list);
  printf("Removing -1:\n");
  list = remove_node(list,-1);
  print_list(list);
  printf("Freeing list.\n");
  list = free_list(list);
  print_list(list);

  return 0;
}
