#include<stdio.h>

int main()
{
    float marks[5];
    float avg=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter the mark for subject %i:",i+1);
        scanf("%f",&marks[i]);
        avg += marks[i];
    }
    avg=avg/5;
    printf("average mark is: %.2f",avg);

    return 0;

}
