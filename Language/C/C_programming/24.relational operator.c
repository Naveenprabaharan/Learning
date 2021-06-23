#include<stdio.h>

int main()
{
    //not
    puts("check NOT-! conditions");
    if(1==1)
    {
        puts("1 equals (1==1) to 1 so result true!");
    }
    else
    {
        puts("1 not equals (1==1) to 1 so result true!");
    }

    if(1!=1)
    {
        puts("1 not equals (1!=1) to 1 so result true!");
    }
    else
    {
        puts("1 equals (1!=1)to 1 so result true!");
    }


    //or
    puts("check OR-|| conditions");
    if(1 || 1)
    {
        puts("1 or 1 result True");
    }
    if(1 || 0)
    {
        puts("1 or 0 result True");
    }
    if(0 || 1)
    {
        puts("0 or 1 result True");
    }
    if(0 || 0)
    {
        puts("0 or 0 result True");
    }
    else
    {
        puts("0 or 0 result False");
    }

    //AND
    puts("check AND-&&  conditions");

    if(1 && 1)
    {
        puts("1 or 1 result True");
    }
    else
    {
        puts("1 or 1 result False");
    }
    if(1 && 0)
    {
        puts("1 or 0 result True");
    }
    else
    {
        puts("1 or 0 result False");
    }
    if(0 && 1)
    {
        puts("0 or 1 result True");
    }
    else
    {
        puts("0 or 1 result False");
    }
    if(0 && 0)
    {
        puts("0 or 0 result True");
    }
    else
    {
        puts("0 or 0 result False");
    }
    return 0;
}
