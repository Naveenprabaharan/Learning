#include<iostream>
using namespace std;

int main()
{
    int arr[3][2];

    for(int i=0;i<3;i++)
    {
        cout<<"enter the student"<<i+1<<" marks"<<endl;

        for(int j=0;j<2;j++)
        {
            cout<<"Subject: "<<j+1<<" marks"<<" = ";
            cin>>arr[i][j];
        }
    }

    cout<<"stuudents marks:"<<endl;
    cout<<"student\tsub1\tsub2"<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<i+1<<"\t";
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<"\t";

        }
        cout<<endl;
    }

    return 0;
}
