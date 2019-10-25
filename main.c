
#include <stdio.h>
#include <stdlib.h>


struct node { int i;
              struct node *next;
            };
struct node *insert_front(struct node *nody, int data);

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
  struct node *list = calloc(10,sizeof(struct node));
  struct node nody;
  nody.i = 1;
  list[0] = nody;


  list = insert_front(list,99);
  print_list(list);
  free(list);
  return 0;
}
struct node * insert_front(struct node *nody, int data){
    struct node newNode;
    newNode.i = data;
    newNode.next = nody;

    struct node *longNody = realloc(nody,sizeof(nody)+sizeof(struct node));
    return longNody;
}
