#include<stdio.h>

int main()
{
    //char a='a';
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int arra[150];
    int j=0;

    //assigning value to small letters
    for(int i=97;i<=122;i++)
    {
        arra[i] = POINTS[j];
        j++;
        //printf("%d\n",arra[i]);
    }

    //int arra1[100];
    j=0;
    //assigning value to caps letters
    for(int i=65;i<=90;i++)
    {
        arra[i] = POINTS[j];
        j++;
        //printf("%d\n",arra1[i]);
    }

    char name[]="hello";

    int l=0;
    int arr[100];
    int sum =0;

    while(name[l] != '\0')
    {
        arr[l]= (int)name[l];
        printf("%c\n",arr[l]);
        printf("%d\n",arr[l]);
        l++;
    }
    int o=0;
    while(arr[o] != '\0')
    {
        if(arr[o]>=65 && arr[o]<=90)
        {
            int u=arr[o];
            sum += arra[u];
        }
        else if(arr[o]<=122 && arr[o]>=97)
        {
            int u=arr[o];
            sum += arra[u];
        }
        else
        {
            sum +=0;
        }
        o++;
    }
    printf("%d",sum);
    return 0;
}
