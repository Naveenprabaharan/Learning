#include<stdio.h>
int main()
{
    int n;
    puts("Enter the Number to found factorial:");
    scanf("%i",&n);

    /*int factorial_val=n;
    int j=1;
    for(int i=n;i>1;i--)
    {
        factorial_val *=n-j;
        j++;
    }
    */

    long factorial_val=1;
    while(n>0)
    {
        factorial_val *=n--;
    }
    printf("factorial = %i",factorial_val);
    return 0;
}
