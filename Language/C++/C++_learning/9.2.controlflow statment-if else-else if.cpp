#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the Number:"<<endl;
    cin>>number;

    if(number>0)
    {
        cout<<number<<":number is positive"<<endl;
    }
    else if(number<0)
    {
        cout<<number<<":number is negative"<<endl;
    }
    else
    {
        cout<<number<<":number is ZERO"<<endl;
    }
    cout<<"this is always execute statement!"<<endl;

    return 0;
}
