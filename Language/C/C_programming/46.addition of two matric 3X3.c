#include<stdio.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];

    puts("Enter array elements for array 1:");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            printf("enter the element for array[%d][%d]:",row,col);
            scanf("%i",&arr1[row][col]);
        }
    }

    puts("Enter array elements for array 2");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            printf("enter the element for array[%d][%d]:",row,col);
            scanf("%i",&arr2[row][col]);
        }
    }

    puts("sum of array elements :");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            sum[row][col]=arr1[row][col] + arr2[row][col];
        }
    }


    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            printf("%d ",sum[row][col]);

        }
        printf("\n");
    }
    return 0;
}
