#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *pointer;
    pointer = &a;

    cout<<"value of 'a':"<<a<<endl;
    cout<<"Address of 'a':"<<&a<<endl;
    cout<<"value of '*ip':"<<*pointer<<endl;
    cout<<"Address of '*ip':"<<pointer<<endl;
    return 0;
}
