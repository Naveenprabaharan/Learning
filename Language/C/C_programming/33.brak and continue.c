#include<stdio.h>

int main()
{
    int month;
    puts("Enter the month No:");
    scanf("%i",&month);
    for(int day=1;day<=31;day++)
    {
        if(( month==4 || month==6 || month==9 || month==11 ) && day==30)
         {
             continue;
         }

        printf("day:%d\n",day);
        if(month==2 && day==28)
        {
            break;
        }

    }
    return 0;

}
