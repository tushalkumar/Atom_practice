#include <stdio.h>
#include <stdlib.h>


 struct node
{
  int data;
  struct node *next;
};

int main() {
  struct node * head =NULL;
  struct node * second=NULL;
  struct node * third=NULL;


  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));
  return 0;
}
