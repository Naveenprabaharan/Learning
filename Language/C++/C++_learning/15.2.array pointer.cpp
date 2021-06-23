
#include<iostream>
using namespace std;
const int MAX=3;
int main()
{
    int arr[MAX]={100,200,300};
    int *pointer;

    pointer = arr;

    for(int i=0;i<MAX;i++)
    {
        cout<<"the value of arr["<<i<<"]: "<<*pointer<<endl;
        cout<<"the Address of arr["<<i<<"]: "<<pointer<<endl;
        pointer++;
    }

    return 0;
}

