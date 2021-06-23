#include<stdio.h>
int main()
{
    int bs;

    float da=30,hra=20,ta=10;
    double gs;
    for(int count=0;count<2;count++)
    {
        puts("Enter the basic salary:");
        scanf("%i",&bs);

        gs=bs + (bs*hra/100) +(bs*da/100) + (bs*ta/100);
        printf("Gross salary:%g\n",gs);
    }
    return 0;
}
