#include<stdio.h>

//get salary
//if salary less then 10000 give 8.33% bonus
//if salary less then 20000 and more then 10000 give 4% bonus
//if salary more then 20000 give no bonus
int main()

{
    float emp_1,bonus,fnl_salery;
    puts("Enter Employee ONE Basic Salary: ");
    scanf("%f",&emp_1);

    if(emp_1<10000)
    {
        printf("Employee will eligible to get BONUS because Your salary %.2f its LESS  then 10000!",emp_1);
        bonus=emp_1*.0833;
        fnl_salery = emp_1 + bonus;
        printf("\nEmployee basic salary:%.2f\nEmployee bonus:%.2f\nEmployee final salary:%.2f",emp_1,bonus,fnl_salery);
    }
    else if(emp_1<20000)
    {
        printf("Employee will eligible to get BONUS because Your salary %.2f its LESS  then 20000!",emp_1);
        bonus=emp_1*.04;
        fnl_salery = emp_1 + bonus;
        printf("\nEmployee basic salary:%.2f\nEmployee bonus:%.2f\nEmployee final salary:%.2f",emp_1,bonus,fnl_salery);
    }
    else
    {
        printf("Employee will not eligible to get BONUS because Your salary %.2f its MORE then 10000!",emp_1);
    }
    return 0;
}
