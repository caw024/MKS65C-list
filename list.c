#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node * n){
  if (n->next == NULL){
    printf("end of node\n");
  }
  else{
    printf("value at current node: %d\n", n->i);
    print_list(n->next);
  }
}

struct node * insert_front(struct node *, int);

struct node * free_list(struct node *);

int main(){
  struct node s1,s2,s3,s4,s5;
  s1.i = 1;
  s1.next = s2;
  s2.i = 2;
  s2.next = s3;
  s3.i = 3;
  s3.next = s4;
  s4.i = 4;
  s4.next = s5;
  s5.i = 5;
  s5.next = NULL;
}
