#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int n;

    cout<<"enter n: "<<endl;
    cin>>n;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b: "<<endl;
    cin>>b;
    int p1=a+1;
    int p2 = n-b;
    int sum = n-max(p1,p2)+1;

    cout<<sum;
    return 0;
}
