#include<stdio.h>

int main()
{
    char str[25];
    puts("enter word");
    //scanf("%s",str);
    //scanf("%s",&str[0]);
    fgets(str,25,stdin);
    puts(str);
    return 0;
}
