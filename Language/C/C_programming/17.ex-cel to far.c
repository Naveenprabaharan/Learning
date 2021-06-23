#include<stdio.h>

int main()
{
    float cel,far;

    puts("Enter the celceous :");
    scanf("%f",&cel);

    far=(cel*9/5)+32;
    printf("\nCelceous %.2f (Degree) equeals to %.2f (Degree) fareignheat",cel,far);



    puts("\nEnter the fareignheat :");
    scanf("%f",&far);

    cel=(far-32)*5/9;
    printf("\nfareignheat %.2f (Degree) equeals to %.2f (Degree) Celceous",far,cel);

    return 0;
}
