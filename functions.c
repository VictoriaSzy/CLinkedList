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
  struct node * a = calloc(1, sizeof(struct node)) ; // use calloc since it returns a pointer and that's how we want to start
  free(a) ; // release the beginning because we want a new beginning
  a -> i = x ;
  a -> next = l ;
  return a ;
}

struct node * free_list(struct node * l) {
  // Should take a pointer to a list as a parameter and then go through
  // the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
  if (l -> next) free_list(l -> next) ;
  else {
    struct node * a = l ;
    free(l) ; // free or release the original node given or the copy that was passed into this function
    return a ; // return the one we just made
  }
}
