#include<stdio.h>

int main()
{
    char str1[20]="this";
    char str[20],c=' ';
    int i;
    printf("Enter pwd:");
    while(i<=9)
    {
        str[i]=getch();
        c=str[i];
        if(c==13)
        {
            break;
        }
        else
        {
            printf("*");
            i++;
        }

    }

if(str1==str)
    {
        puts(str);
    }

str[i]='\0';
i=0;
printf("\n");
printf("your pasd: %s",str);


return 0;

}
