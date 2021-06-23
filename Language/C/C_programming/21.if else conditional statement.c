#include<stdio.h>

int main()
{
    int emp_1,emp_2;
    puts("Enter Employee ONE Salery: ");
    scanf("%i",&emp_1);

    puts("Enter Employee TWO Salery: ");
    scanf("%i",&emp_2);

    if(emp_1>emp_2)
    {
        puts("Employee ONE salary greater then Employee TWO");
    }
    else
    {
        puts("Employee TWO salary greater then Employee ONE");
    }
}
