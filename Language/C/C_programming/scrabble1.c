#include <ctype.h>
//#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[]);

int main(void)
{


    // Get input words from both players
    char word1[] = "kk";
    char word2[] = "hello";

    // Score both words
    int score1 = compute_score(word1);
    printf("score1=%d\n",score1);

    int score2 = compute_score(word2);
    printf("score2=%d\n",score2);


    // TODO: Print the winner



}

int compute_score(char word[])
{
    // TODO: Compute and return score for string
    // assigning points to Alphabat
    int arra[150];
    int j = 0;
    for(int i = 97; i <= 122; i++)
    {
        arra[i] = POINTS[j];
        j++;
    }

    j=0;

    for(int i=65;i<=90;i++)
    {
        arra[i] = POINTS[j];
        j++;
    }

    //Assign name to value
    int l=0;
    int arr[100];
    int sum =0;

    while(word[l] != '\0')
    {
        arr[l]= (int)word[l];
        printf("%c\n",arr[l]);
        printf("%d\n",arr[l]);
        l++;
    }

    //valueate sum
    int o=0;
    while(arr[o] != '\0')
    {
        if(arr[o]>=65 && arr[o]<=90)
        {
            int u=arr[o];
            sum += arra[u];
            printf("%d",sum);
        }
        else if(arr[o]<=122 && arr[o]>=97)
        {
            int u=arr[o];
            sum += arra[u];
            printf("%d",sum);
        }
        else
        {
            sum +=0;
        }
        o++;
    }

    return sum;
    sum =0;

}
