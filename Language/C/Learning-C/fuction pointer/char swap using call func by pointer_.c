#include<stdio.h>
int swap(char*,char*);

int main()
{
  char a='A',b='B';
  int (*ptr)(char*,char*);
  ptr=&swap;
  printf("before swaping %c,%c",a,b);
  ptr(&a,&b);
  printf("\nbefore swaping %c,%c",a,b);
}

int swap(char *x,char *y )
{
  char temp=*x;
  *x=*y;
  *y=temp;
  return 0;
}