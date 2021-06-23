#include<stdio.h>


int addition(int *ptr1,int *ptr2)
{
    int sum;
    sum= *ptr1 + *ptr2;
    printf("addition of %d and %d is : %i", *ptr1, *ptr2,sum);
    return 0;
}

int main()
{
    int num1,num2;
    puts("enter the num1:");
    scanf("%d",&num1);
    puts("enter the num2:");
    scanf("%d",&num2);

    int *ptr1;
    int *ptr2;

    //assign pointer to number
    ptr1=&num1;
    ptr2=&num2;

    addition(ptr1,ptr2);
    return 0;
}
