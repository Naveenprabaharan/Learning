#include<stdio.h>

int main()
{
    int count=10;
    printf("address :%x",&count);
    printf("\nvalue:%d",count);
    printf("\nvalue:%d",*(&count));

    int *pointer;
    pointer=&count;

    printf("\naddress :%x",pointer);
    printf("\nvalue:%d",*pointer);

    return 0;
}

