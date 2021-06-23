#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node*  next;
}r;

r* root = NULL;


void insert(int a)
{
r* temp;
temp = (r*) malloc(sizeof(r));
temp->data=a;
temp->next=NULL;
if(root == NULL)
{
  root = temp;
}
else
{
  r* t;
  t=root;
  while(t->next !=NULL)
  {
    t=t->next;
  }
  t->next = temp;
}
}

void dis()
{
  r* t;
  t=root;
  while(t!=NULL)
  {
    printf("%d",t->data);
    t= t->next;
  }
}

int main()
{
  insert(1);
  insert(2);
  insert(3);
  dis();
  return 0;
}