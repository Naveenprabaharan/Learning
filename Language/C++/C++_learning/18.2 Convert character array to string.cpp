#include<iostream>
#include<string>
using namespace std;

int main()
{
    char m[]="hello";

    string str;

    for(int i=0;i<sizeof(m);i++)
    {
        str[i]=m[i];
        cout<<str[i];
    }
    return 0;
}
