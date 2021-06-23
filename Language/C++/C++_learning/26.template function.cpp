#include<iostream>
using namespace std;


template <class T>

T maxVal(T n1, T n2)
{
    return (n1>n2)?n1:n2;
}


int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"Enter two integer:";
    cin>>i1>>i2;
    cout<<"maxVal:"<<maxVal(i1,i2);
    cout<<"\nEnter two float:";
    cin>>f1>>f2;
    cout<<"maxVal:"<<maxVal(f1,f2);
    cout<<"\nEnter two charater:";
    cin>>c1>>c2;
    cout<<"maxVal:"<<maxVal(c1,c2);
    return 0;
}
