struct node { int i;
              struct node *next;
            };


struct node *insert_front(struct node *nody, int data);
struct node *remove_node(struct node *front, int data);
struct node * free_list(struct node *list);
void print_list(struct node *nody);
