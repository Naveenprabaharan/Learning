#include<iostream>
using namespace std;

int main()
{
    int x=-1;

    cout<<"before try"<<endl;
    try
    {
        cout<<"inside of try block"<<endl;
        if(x <0)
        {
            throw x;
            cout<<"after throw below code will not execute"<<endl;
        }
    }
    catch(int x)
    {
        cout<<"Exception Cought!"<<endl;
    }

    cout<<"this line will excute!"<<endl;
    return 0;
}
