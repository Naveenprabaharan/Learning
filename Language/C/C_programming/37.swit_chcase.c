#include<stdio.h>

int main()
{
    int day;
    puts("Enter a week day");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        {
            puts("Monday!");
            break;
        }
    case 2:
        {
            puts("Tuseday!");
            break;
        }
    case 3:
        {
            puts("Wednesday!");
            break;
        }
    case 4:
        {
            puts("Thurseday!");
            break;
        }
    case 5:
        {
            puts("Friday!");
            break;
        }
    case 6:
        {
            puts("Saturday!");
            break;
        }
    case 7:
        {
            puts("Sunday!");
            break;
        }

    default:
        {
            puts("Enter a week days!");
            break;
        }
    }

    return 0;
}

