#include<iostream>
using namespace std;

int main()
{
    float num, sum=0.0;

    do
    {
        cout<<"Enter the number to sum: ";
        cin>>num;
        sum +=num;
    }
    while(num != 0.0);

    cout<<"total sum is ="<<sum;
    return 0;
}
