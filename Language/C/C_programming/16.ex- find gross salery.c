#include<stdio.h>

int main()
{
    float b_salery, DA, HRA, TRA,g_salery;
    char name[20];

    puts("Employee Name: ");
    scanf("%s",name);

    puts("Enter The Employee Basic  Salary:");
    scanf("%f",&b_salery);

    DA=b_salery*.30;
    HRA=b_salery *.20;
    TRA=b_salery *.10;
    g_salery=b_salery+DA+HRA+TRA;

    printf("Employee Name:%s\n",name);
    printf("Employee Basic Salary:%.2f\n",b_salery);
    printf("Employee DA allowance:%.2f\n",DA);
    printf("Employee HRA allowance:%.2f\n",HRA);
    printf("Employee TRA allowance:%.2f\n",TRA);
    printf("Employee Gross Salary:%.2f",g_salery);

    return 0;
}
