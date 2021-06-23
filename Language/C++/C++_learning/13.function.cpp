#include<iostream>
using namespace std;

int max( int, int);

int main()
{
    int a = 10;
    int b = 20;

    int result = max(a,b);

    cout<<"max value id: "<<result;

    return 0;

}

int max(int a, int b)
{
    if( a > b)
        return a;
    else
        return b;
}
