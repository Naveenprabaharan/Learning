#include<stdio.h>
int main()
{
    int age;
    char is_minor;

    puts("Enter the age:");
    scanf("%i",&age);

    is_minor= age >= 18 ? 'N' : 'Y';

    printf("entered age is minor? %c",is_minor);
    return 0;
}
