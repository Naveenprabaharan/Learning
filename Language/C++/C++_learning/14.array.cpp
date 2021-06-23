#include<iostream>
using namespace std;


int main()
{
    int n[10];
    int s=10;
    for(int i=0;i<s;i++)
    {
        cout<<"enter the value for ["<< i <<"]"<<endl;
        cin>>n[i];
    }
    for(int j=0;j<s;j++)
    {
        cout<<"value in ["<<j<<"]"<<endl;
        cout<<n[j]<<endl;
    }

    return 0;
}
