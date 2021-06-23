#include<stdio.h>

int main()
{
    int num =5;

    puts("Addition compound operator");
    num +=5;//10
    printf("Num= %i",num);

    puts("\nSubtration compound operator");
    num -=5;//5
    printf("Num= %i",num);

    puts("\nmultiplication compound operator");
    num *=3;//15
    printf("Num= %i",num);

    puts("\ndivision compound operator");
    num /=3;//5
    printf("Num= %i",num);

    puts("\nmodulus compound operator");
    num %=2;//1
    printf("Num= %i",num);

    return 0;
}

