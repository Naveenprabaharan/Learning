#include<stdio.h>
int s(int *[]);

int main()
{
  int a[5]={4,3,7,1,2};
  int *b[5];

  for (int i=0;i<5;i++)
  {
    b[i]=&a[i];
  }
  printf("before: \n");
  for (int j=0;j<5;j++)
  {
    printf("A[%d] : %d\n",j,a[j]);
  }


  s(b);
  printf("after:\n");
  for (int j=0;j<5;j++)
  {
    printf("A[%d] : %d\n",j,a[j]);
  }

}


int s(int *x[])
{
  int i=4;
  int temp;
  for(int j=0;j<4;j++)
  {
    for(int z=0;z<i;z++)
    {
      if(*x[z]>*x[z+1])
      {
        temp=*x[z];
        *x[z]=*x[z+1];
        *x[z+1]=temp;
      }
    }
    i--;
  }

  return 0;
}