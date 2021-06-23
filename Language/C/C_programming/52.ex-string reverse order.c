#include<stdio.h>
#include<string.h>

int main()
{
    char *str1;
    //char *str2;
    puts("Enter the input:");
    fgets(str1,10000,stdin);
    int len=strlen(str1);
    //int len1=0;
    //printf("%c",str1[0]);
    for(int i=len;i>=0;i--)
    {
        printf("%c",str1[i]);
    }

    //puts(str1);
    //puts(str2);
    return 0;
}
