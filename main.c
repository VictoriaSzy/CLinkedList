#include "headers.h"

int main() {
  struct node * q = calloc(1, sizeof(struct node)) ;
  // q will be the tester
  printf("Printing empty list:\n") ;
  print_list(q) ;

  printf("Adding #s 0-9 to list.\n") ;
  int z ;
  for (z = 0 ; z < 10; z++){
    q = insert_front(q, z);
  }
  printf("Printing my new list that has values added:\n") ;
  print_list(q) ;

  printf("Removing node with value 2.\n") ;
  remove_node(q,2) ;
  printf("Removing node with value 6.\n") ;
  remove_node(q,6) ;
  printf("Printing list (which should not have 2 and 6):\n") ;
  print_list(q) ;
  printf("Removing 100(which is not in the list so it should remain the same!):\n") ;
  remove_node(q,100) ;
  print_list(q) ; // The list should not change from here since 100 is not in the list
  printf("Freeing the rest of the list:\n") ;
  q = free_list(q) ;
  printf("Printing list:\n") ;
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
