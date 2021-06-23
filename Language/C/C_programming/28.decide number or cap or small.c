#include<stdio.h>
int main()
{
    char ch;
    puts("Enter character:");
    ch=getchar();

    if(ch >=65 && ch<=90)
    {
        puts("entered a Capital letter!");
    }
    else if(ch>=97 && ch<=122)
    {
        puts("entered a Small letter!");
    }
    else if(ch>=48 && ch<=57 )
    {
        puts("entered a Number letter!");
    }
    else
    {
        puts("entered a Sumbol letter!");
    }
    return 0;
}
