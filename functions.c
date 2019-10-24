#include "headers.h"

void print_list(struct node * l) {
  //Should take a pointer to a node struct and print out all of the data in the list
  if ( l -> next ) {
    printf("%d ", l -> i) ; // use i since that's the int we have as part of our struct
    print_list( l -> i ) ;
  }
}

struct node * insert_front(struct node * l, int x) {
  /*Should take a pointer to the existing list and the data to be added,
  create a new node and put it at the beginning of the list.
  The second argument should match whatever data you contain in your nodes.
  Returns a pointer to the beginning of the list.*/
}

struct node * free_list(struct node * l) {
  // Should take a pointer to a list as a parameter and then go through
  // the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
}
