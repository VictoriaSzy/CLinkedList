#include "headers.h"

int main() {
  struct node * q = calloc(1, sizeof(struct node)) ;
  printf("Printing empty list:\n") ;
  print_list(q) ;
  printf("Adding #s 0-9 to list.\n") ;
  int z ;
  for (z = 0 ; z < 9 ; z++) {
    insert_front(q, z) ;
  }
  printf("Printing my new list that has values added:\n") ;
  print_list(q) ;
  printf("Removing 9\n") ;
  remove(q,9) ;
  print_list(q) ;
  printf("Removing 2\n") ;
  remove(q,2) ;
  print_list(q) ;
  printf("Removing 6\n") ;
  remove(q,6) ;
  print_list(q) ;
  printf("Removing 100\n") ;
  remove(q,100) ;
  print_list(q) ; // The list should not change from here since 100 is not in the list
  /*printf("And now we're going to free nodes\n") ;
  free_list(q) ;*/
  printf("Freeing the list\n") ;
  for (z = 0 ; z < sizeof(q); ) {
    printf("Freeing node: %d\n", z) ;
  }
  print_list(q) ;
  return 0 ;
}

/*
Write a simple linked list program. You will need a define a node struct with the following data members:
- A piece of data (your choice)
- A pointer to the next node
- Here's an example of what the struct could look like: struct node { int i; struct node *next; };
Printing empty list:
[ ]
Adding #s 0-9 to list.
Printing list:
[ 9 8 7 6 5 4 3 2 1 0 ]
Removing 9:
[ 8 7 6 5 4 3 2 1 0 ]
Removing 4:
[ 8 7 6 5 3 2 1 0 ]
Removing 0:
[ 8 7 6 5 3 2 1 ]
Removing -1:
[ 8 7 6 5 3 2 1 ]
Freeing list.
freeing node: 8
freeing node: 7
freeing node: 6
freeing node: 5
freeing node: 3
freeing node: 2
freeing node: 1
Printing list:
[ ]
*/
