#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node * n){
  if (n->next == NULL){
    printf("end of node\n--------------------\n\n");
  }
  else{
    printf("value at current node: %d\n", n->i);
    print_list(n->next);
  }
}

struct node * insert_front(struct node * n, int x){
  struct node a, b;

  a.i = x;
  a.next = n;
  b.next = &a;

  return b.next;
}

struct node * free_list(struct node *n){

  struct node a,b;
  b.next = n;
  a.next = n;

  while ((a.next)->next != NULL){
    printf("removing value at current node: %d\n", a.next->i);
    a.next = malloc(5*sizeof(size_t));

    free(a.next);
    printf("value at current node: %d\n", a.next->i);
  }
  
  return b.next;     
}

int main(){
  struct node s0,s1,s2,s3,s4,s5,*L, *L2;
  s0.next = &s1;
  s1.i = 1;
  s1.next = &s2;
  s2.i = 2;
  s2.next = &s3;
  s3.i = 3;
  s3.next = &s4;
  s4.i = 4;
  s4.next = &s5;
  s5.i = 5;
  s5.next = NULL;

  printf("Finding all numbers in current node.\n--------------------\n");
  print_list(s0.next);

  printf("Adding 10 to beginning of current node.\n--------------------\n");
  L = insert_front(s0.next,10);
  print_list(L);

  printf("Freeing the list.\n\n");
  L2 = free_list(s0.next);
  printf("\nList now:\n");
  print_list(L2);
}
