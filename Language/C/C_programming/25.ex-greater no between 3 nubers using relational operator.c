#include<stdio.h>
int main()
{
    int num1,num2,num3;
    puts("Enter the 3 numbers");
    scanf("%i %i %i",&num1, &num2, &num3);

    if(num1>num2 && num1>num3)
    {
        printf("Number %i is greater then %i and %i",num1,num2,num3);
    }

    else if(num2>num3 && num2>num1)
    {
        printf("Number %i is greater then %i and %i",num2,num3,num1);
    }
    else
    {
        printf("Number %i is greater then %i and %i",num3,num2,num1);
    }
    return 0;
}

