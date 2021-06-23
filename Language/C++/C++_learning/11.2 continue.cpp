#include<iostream>
using namespace std;

int main()
{
    int month;
    cout<<"enter the month";
    cin>>month;
    for(int i = 1;i<32;i++)
    {
        if((month ==6 || month==7)&& i==31)
        {
            continue;
        }
        cout<<i<<"\n";
        if(month==2  && i==28)
        {
            break;
        }
    }

    return 0;

}
