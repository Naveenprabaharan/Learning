#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter the number to find Factorial:";
    cin>>number;

    int i=1;
    int sum=1;
    while(i<=number)
    {
        sum *=i;
        i++;
    }
    cout<<"factorial of "<<number<<" is = "<<sum;
    return 0;
}
