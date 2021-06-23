#include<stdio.h>

//C:\Users\navee\Desktop
int main()
{
    FILE *fp;
    fp=fopen("new.txt","r");
    while(1)
    {
        char ch=fgetc(fp);
        if(ch==' ')
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
