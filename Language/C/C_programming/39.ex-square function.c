#include<stdio.h>

int main()
{
    int square(int num)
    {
        return num * num;
    }

    int result=square(10);
    printf("10 X 10 =%i",result);
    return 0;
}
