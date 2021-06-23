#include<stdio.h>

int display(int *ptr)
{
    printf("pointer hold a value of : %d",*ptr);
}

int main()
{
    int num=0;
    int *numpointer;
    numpointer=&num;

    puts("Enter the number:");
    scanf("%d",&num);
    display(numpointer);
    return 0;
}
