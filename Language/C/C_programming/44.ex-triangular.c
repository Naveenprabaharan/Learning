#include<stdio.h>
int main()
{
    int n;
    puts("Enter the Number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int counter=1;
        while(counter<=i)
        {
            printf("* ");
            counter++;
        }
        printf("\n");
    }
    return 0;
}
