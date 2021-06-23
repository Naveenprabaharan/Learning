#include<stdio.h>

int main()
{
    int n;
    puts("Enter number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        int flag=0;
        int num=i/2;
        for(int j=num;j>1;j--)
        {
            if(i%j==0)
            {
                flag=1;
            }

        }
        if(flag==0)
            {
                printf("Prime number %d\n",i);
            }
            else
            {
                printf("Not prime number %d\n",i);
            }
    }
    return 0;
}
