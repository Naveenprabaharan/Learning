#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("write.txt","w+");
    fprintf(fp,"%s","this is my first line");

    char ch=fgetc(fp);
    printf("\n navi%c",ch);
    fclose(fp);
    return 0;
}
