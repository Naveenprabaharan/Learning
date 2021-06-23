#include<stdio.h>

int main()
{
    char str[100];
    int length =0;
    puts("Enter the input text:");
    fgets(str,1001,stdin);
    for(int i=0;str[i] != '\n';i++)
    {
        length +=1;
    }
    printf("total length of entered word is: %d",length);
    return 0;
}
