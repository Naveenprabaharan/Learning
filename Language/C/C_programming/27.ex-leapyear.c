#include<stdio.h>

int main()
{
    int year;
    puts("Enter the year:");
    int flag=0;
    scanf("%i",&year);

    if(year % 4 != 0)
    {
        printf("%i is  a common year",year);
    }
     else if(year %100 !=0)
    {
        printf("%i is  a leap year",year);
    }
    else if(year % 400 !=0)
    {
        printf("%i is  a Common year",year);
    }

    else
    {
        printf("%i is a leap year",year);
    }

    return 0;
}
