#include<stdio.h>

int main()
{
    char str[1000];
    FILE *fp;
    fp=fopen("append.txt","a");
    printf("enter text:");
    fflush(stdin);
    fgets(str,1000,stdin);
    fprintf(fp,"%s",str);
    fclose(fp);
    return 0;
}
