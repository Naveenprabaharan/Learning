#include<iostream>
using namespace std;

int main()
{
    char input, alpha='A';
    cout<<"enter Alphabet in upper case that will become your last row:";
    cin>>input;
    for(int i=1;i<=(input-'A'+1);i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<alpha;
        }
        cout<<endl;
        alpha++;
    }
}
