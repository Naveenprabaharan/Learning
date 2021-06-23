
#include<stdio.h>

//get salary
//if salary less then 10000 give 8.33% bonus
//if salary less then 20000 and more then 10000 give 4% bonus
//if salary more then 20000 give no bonus
int main()

{
    float emp_1,bonus,fnl_salery;
    char quit;


    while(quit != 'Y')

    {
        puts("Enter Employee Basic Salary: ");
        scanf("%f",&emp_1);
        fflush(stdin);
        bonus=emp_1*.0833;
        fnl_salery = emp_1 + bonus;
        printf("\nEmployee basic salary:%.2f\nEmployee bonus:%.2f\nEmployee final salary:%.2f",emp_1,bonus,fnl_salery);
        puts("\nDo  you Want run Again? (Y)es or (N)o:");
        quit=getch();
    }

    return 0;
}
