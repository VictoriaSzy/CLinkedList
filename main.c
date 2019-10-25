#include "headers.h"

int main() {
  struct node * q = calloc(1, sizeof(struct node)) ;
  printf("Printing empty list: \n") ;
  print_list(q) ;
  printf("Adding #s 0-9 to list.") ;
  int z ;
  for (z = 0 ; z < 9 ; z++) {
    insert_front(q, z) ;
  }
  printf("Printing my new list that has values added: \n") ;
  print_list(q) ;
  printf("And now we're going to free nodes in order:\n") ;
  free_list(q) ;
  printf("The list will now be freed\n") ;
  return 0 ;
}

/*
Write a simple linked list program. You will need a define a node struct with the following data members:
- A piece of data (your choice)
- A pointer to the next node
- Here's an example of what the struct could look like: struct node { int i; struct node *next; };
*/
