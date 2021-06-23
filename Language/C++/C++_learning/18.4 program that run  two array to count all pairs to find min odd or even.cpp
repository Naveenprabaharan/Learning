#include<iostream>
using namespace std;

int countPairs(int a[],int b[],int m,int n)
{
    int odd1=0,even1=0;
    int odd2=0,even2=0;

    for(int i=0;i<m;i++)
    {
        if(a[i]%2)
        {
            odd1++;
            //cout<<"odd1 "<<a[i]<<endl;
        }
        else
        {
            even1++;
            //cout<<"even1 "<<a[i]<<endl;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(b[i]%2)
        {
            odd2++;
            //cout<<"odd2 "<<b[i]<<endl;
        }
        else
        {
            even2++;
            //cout<<"even2 "<<b[i]<<endl;
        }
    }
    //cout<<odd1<<even1<<endl;
    //cout<<odd2<<even2<<endl;
    int pairs = min(odd1,even2) + min(odd2,even1);
    return pairs;
}


int main()
{
    int a[]={9,14,6,2,11};
    int b[] = {8,4,7,20};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    cout<<countPairs(a,b,m,n);
    return 0;

}
