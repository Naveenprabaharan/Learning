#include<iostream>
using namespace std;

int main()
{
    int a=20;
    int b=4;
    int c;

    cout<<"Arthematic operator"<<endl;

    c=a+b;
    cout<<"c=a+b;"<<c<<endl;

    c=a-b;
    cout<<"c=a-b;"<<c<<endl;

    c=a*b;
    cout<<"c=a*b;"<<c<<endl;

    c=a/b;
    cout<<"c=a/b;"<<c<<endl;

    c=a%b;
    cout<<"c=a%b;"<<c<<endl;

    cout<<"a;"<<a<<endl;
    c=a++;
    cout<<"c=a++;"<<c<<endl;
    cout<<"a;"<<a<<endl;
    c=a--;
    cout<<"c=a--;"<<c<<endl;
    cout<<"a;"<<a<<endl;
    c=++a;
    cout<<"c=++a;"<<c<<endl;

    c=--a;
    cout<<"c=--a;"<<c<<endl;

    cout<<"\nRelational Operator"<<endl;
    if(a==b)
    {
        cout<<"a==b"<<endl;
    }
    else
    {
       cout<<"a!=b"<<endl;
    }
    if(a>b)
    {
       cout<<"a>b"<<endl;
    }
    else
    {
        cout<<"a<b"<<endl;
    }
    if(a>=b)
    {
        cout<<"a>=b"<<endl;
    }
    else
    {
       cout<<"a<=b"<<endl;
    }


    cout<<"\nlogical operator"<<endl;

    a=5;
    b=5;
    if(a==5 && b==5)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    if(a==5 || b==5)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }


    cout<<"turnry operator or condition operator"<<endl;
    (5==5) ? cout<<"true" :cout<<"false";
    return 0;
    }
