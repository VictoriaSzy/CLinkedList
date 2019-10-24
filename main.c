#include "headers.h"

int main() {
  struct node * q = calloc(1, sizeof(struct node)) ;
  printf("Printing empty list:\n") ;
  print_list(q) ;
  return 0 ;
}

/*
Write a simple linked list program. You will need a define a node struct with the following data members:
- A piece of data (your choice)
- A pointer to the next node
- Here's an example of what the struct could look like: struct node { int i; struct node *next; };
*/
