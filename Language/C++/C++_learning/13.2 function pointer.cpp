#include<iostream>
using namespace std;

void swap(int& a, int& b);

int main()
{
    int a = 10;
    int b = 20;

    cout<<"before swapping: "<<endl;
    cout<<"a= "<<a<<"\nb = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping: "<<endl;
    cout<<"a= "<<a<<"\nb = "<<b<<endl;
    return 0;
}

void swap(int& a, int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
