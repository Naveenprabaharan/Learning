#include<iostream>
using namespace std;


int main()
{
    int x=10;
    int& ref=x;

    ref=99;
    cout<<"value of x is "<<x<<endl;
    x=324;
    cout<<"value of reference is "<<ref<<endl;
    return 0;
}
