#include <iostream>
using namespace std;

int main()
{
    int sum=0,length;

    cout<<"how many student in your group :";
    cin>>length;

    int *student=new int[length];

    for(int i=0;i<length;i++)
    {
        cout<<"enter student"<<i+1<<"mark:";
        cin>>*(student+i);
    }

    for(int i=0;i<length;i++)
    {
        sum += *(student+i);
    }

    cout<<"sum of total "<<length<<"students mark is:"<<sum;

    return 0;

}
