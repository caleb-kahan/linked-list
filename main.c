#include <stdio.h>
struct node { int i; struct node *next; };

void print_list(struct node *nody){
    printf("Printing list: [ ");
    while(nody->i){
      printf("%d ", nody -> i);
      nody = nody->next;
    }
    printf("]\n");
}
int main(){
  struct node nody;
  nody.i = 1;
  print_list(&nody);
  return 0;
}
