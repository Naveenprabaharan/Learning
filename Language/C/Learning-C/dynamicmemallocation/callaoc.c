#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d",&n);

  int* a;
  
  a=(int*)calloc(n,sizeof(int));

  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("ennaterd array elements are:");
   for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }

  free(a);
  return 0;
}