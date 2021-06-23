#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("record.txt","a");
    char c;
    do{

        char *str;
        puts("do you wish to input a string and save it in a file!:(y/n)");
        scanf("%c",&c);

        if(c=='y' || c=='Y')
        {
            puts("Enter a Text:");
            fflush(stdin);
            fgets(str,1000,stdin);
            fprintf(fp,"%s",str);

        }
        else if(c=='N' || c=='n')
        {
            break;
            fclose(fp);
        }
        else
        {
            puts("enter a valid input!");

        }


    }while(c != 'n' || c != 'N');

    //FILE *fp;
    fp=fopen("record.txt","r");
    while(1)
    {
        char ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
