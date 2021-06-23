#include<stdio.h>

int main()
{
    int day;
    puts("Enter a week day");
    scanf("%d",&day);

    lable:
    puts("Enter a week day");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        {
            puts("Monday!");
            goto lable;
        }
    case 2:
        {
            puts("Tuseday!");
            goto lable;
        }
    case 3:
        {
            puts("Wednesday!");
            goto lable;
        }
    case 4:
        {
            puts("Thurseday!");
            goto lable;
        }
    case 5:
        {
            puts("Friday!");
            goto lable;
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


