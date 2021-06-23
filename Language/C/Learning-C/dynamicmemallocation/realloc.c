#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size,option,ele;
  printf("enter the Size of array:");
  scanf("%d",&size);

  int top=-1;
  int* a;
  a = (int*)calloc(size,sizeof(int));

  while(1)
  {
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    scanf("%d",&option);

    switch(option)
    {
      case 1:
      {
        printf("enter the element to insert:");
        scanf("%d",&ele);
        top++;
        if(top==size)
        {
          size++;
          a=(int*) realloc(a,size * sizeof(int));
          a[top]=ele;
        }
        else
        {
          a[top]=ele;
        }
        break;
      }
      case 2:
      {
        printf("%d element poped",a[top]);
        size--;
        a =(int*)realloc(a,size * sizeof(int));
        top--;
        break;
      }
      case 3:
      {
        printf("stock elements are:\n ");
        for(int i=top;i>-1;i--)
        {
          printf("%d\n",a[i]);
        }
        break;
      }
      case 4:
        exit(1);
    }
  }

  

}