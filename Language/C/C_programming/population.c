//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
      puts("Start size: ");
      scanf("%d",&start_size) ;
    }while (start_size < 9);


    // TODO: Prompt for end size
    int end_size;
    do
    {
      puts("End size: ");
      scanf("%d",&end_size) ;
    }while (end_size <= start_size );


    // TODO: Calculate number of years until we reach threshold
    int size = start_size;
    int year = 0;
    while(size < end_size)
    {
        size = size + (size/3) - (size/4);
        year ++;

    }


    // TODO: Print number of years
    printf("Years: %i",year);

}
