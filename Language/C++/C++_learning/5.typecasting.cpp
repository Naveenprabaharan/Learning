#include<iostream>
using namespace std;

int main()
{
    int a=10;
    double b =2.567;

    a=b;
    cout<<"value of a is "<<a<<endl;
    a=(int)b;
    cout<<"value of a is "<<a<<endl;
    a=int(b);
    cout<<"value of a is "<<a<<endl;

    return 0;
    system("pause");
}

