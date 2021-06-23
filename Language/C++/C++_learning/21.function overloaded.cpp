#include<iostream>
using namespace std;

void print(int i)
{
    cout<<"here is int "<<i<<endl;
}

void print(float b)
{
    cout<<"here is float "<<b<<endl;
}

void print(char const *c)
{
    cout<<"here is *c "<<c<<endl;
}

int main()
{
    print(10);
    print(10.10);
    print("ten");
    return 0;
}
