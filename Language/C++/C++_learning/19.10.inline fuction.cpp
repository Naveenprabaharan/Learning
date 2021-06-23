#include<iostream>
using namespace std;

inline int max_val(int a, int b)
{
    return max(a,b);
}

int main()
{

    cout<<"max(100,200):"<<max_val(100 ,200);
    return 0;
}
