#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct node * l) {
  //Should take a pointer to a node struct and print out all of the data in the list
  printf("[") ;
  if (l != NULL) {
    struct node * n = l ;
    while (n->next) {
      printf(" %d", n->i) ; // use i since that's the int we have as part of our struct
      n = n->next ;
    }
  }
  printf(" ]\n") ;
}

struct node * insert_front(struct node * l, int x) {
  /*Should take a pointer to the existing list and the data to be added,
  create a new node and put it at the beginning of the list.
  The second argument should match whatever data you contain in your nodes.
  Returns a pointer to the beginning of the list.*/
  struct node * a = calloc(sizeof(struct node), 1) ; // use calloc since it returns a pointer and that's how we want to start
  free(a) ; // release the beginning because we want a new beginning
  a->i = x ;
  a->next = l ;
  return a ;
}

struct node * free_list(struct node * l) {
  // Should take a pointer to a list as a parameter and then go through
  // the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
  struct node *n = l ;
  while (l->next) {
    printf("Freeing node: %d\n", l->i) ;
    n = l->next ;
    free(l) ; // free or release the original node given or the copy that was passed into this function
    l = n ;
  }
  return n ; // return a struct
}

struct node * remove_node(struct node *front, int data) {
  /*Remove the node containing data from the list pointed to by front.
  If data is not in the list, nothing is changed.
  Returns a pointer to the beginning of the list.*/
  struct node * test = front ;
  struct node * nexttt = front->next ;
  while (nexttt->next) {
    if (nexttt->i == data) {
      // then the data is present and we can get remove it!
      test->next = nexttt->next ;
      //front->next = (front->next)->next ;
      free(nexttt) ;
      return front ;
    }
    // after this we have to keep going through the linked list
    test = nexttt ;
    nexttt = nexttt->next ;
  } // end of while loop
  return front ;
}
