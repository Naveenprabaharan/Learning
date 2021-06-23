#include<stdio.h>
int* sub(int*,int*);

int main()
{
  int a=10,b=5;
  int* (*ptr) (int*,int*);
  ptr = &sub;
  int *result=ptr(&a,&b);
  printf("result: %d",*result);
  return 0;

}

int* sub(int *x,int *y)
{
  int z=(*x)-(*y);
  int *temp=&z;
  return temp;
}