#include<stdio.h>

int main()
{
    char c;
    int i;
    float f;
    puts("Enter a Character:");
    scanf("%c",&c);
    printf("you Entered character as :%c\n",c);

    puts("Enter a Integer:");
    scanf("%i",&i);
    printf("you Entered Integer as :%i",i);

    puts("\nEnter a float:");
    scanf("%f",&f);
    printf("\nyou Entered float as :%f",f);

    return 0;
}
