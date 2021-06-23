#include<stdio.h>

int main()
{
    int choice;
    float bs,gs,bonus=.08,hra=20,ta=10,da=30;
    do{
        puts("\n1.Calculate the Gross salery");
        puts("2.calculate bonus");
        puts("3.quit");
        scanf("%d",&choice);
        if(choice==1 || choice==2)
        {
            puts("enter the Basic salary:");
            scanf("%f",&bs);
        }
        if(choice==1)
        {
            gs=bs + (bs*hra/100) +(bs*da/100) + (bs*ta/100);
            printf("Gross Salary :%.2f",gs);
        }
        else if(choice==2)
        {
            if(bs<10000)
            {
                gs=bs*bonus;
                printf("bonus is %.2f",gs);
            }
            else
            {
                puts("you are not entitled to BONUS!");
            }

        }

    }while(choice !=3);
    return 0;
}
