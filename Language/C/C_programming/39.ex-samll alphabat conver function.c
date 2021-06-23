#include<stdio.h>

char smallchar(char ch)
{
    if(ch>=65 && ch<=90)
    {
        ch +=32;
        return ch;
    }
    else
    {
        return ch;
    }

}

int main()
{
    char ch1;
    puts("Enter a  character:");
    scanf("%c",&ch1);
    char small=smallchar(ch1);
    printf("Entered :%c\nConverted:%c",ch1,small);
    return 0;
}
