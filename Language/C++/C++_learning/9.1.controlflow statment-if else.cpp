#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"enter your number:"<<endl;
    cin>>number;

    if(number > 0)
    {
        cout<<number<<" number is positive!"<<endl;
    }
    else
    {
        cout<<number<<"number is negative!"<<endl;
    }
    cout<<"this statement always executed!"<<endl;
    return 0;
    }
