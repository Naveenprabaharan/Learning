#include<stdio.h>

int main()
{
    int a,b,temp;


    printf("Enter the value for a:");
    scanf("%i",&a);

    printf("Enter the value for b:");
    scanf("%i",&b);
    printf("before swaping values are a=%i, b=%i",a,b);

    //temp=a;
    //a=b;
    //b=temp;

    //a=17=10+7
    a=a+b;
    //b=10=17(a)-7(b)
    b=a-b;
    //7(a)=17(a)-190(b)
    a=a-b;
    printf("\nAfter swaping values are a=%i, b=%i",a,b);
    return 0;
}
