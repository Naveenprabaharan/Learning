#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<7;i++)
    {
        if(i==6)
        {
            cout<<"loop no is "<<i<<" \nbalance will not print because of break statement!";
            break;
        }
        cout<<"loop no is "<<i<<"\n";
    }
    return 0;
}
