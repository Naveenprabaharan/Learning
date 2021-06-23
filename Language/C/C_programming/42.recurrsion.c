#include<stdio.h>
long factorial(int num);

int main()
{
    int num;
    puts("Enter number to find factorial:");
    scanf("%i",&num);

    printf("factorial of %i is %i",num,factorial(num));
    return 0;
}

long factorial(int num)
{
    if(num==1)
    {
        return num;
    }
    else
    {
        return num * factorial(num-1);
    }
}

/*factorial(5)=> 5*<4*3*2*1>
    factorial(4) => 4*<3*2*1>
        factorial(3) => 3*<2*1>
            factorial(2) =>2*<1>
                factorial(1)=>return 1;*/
