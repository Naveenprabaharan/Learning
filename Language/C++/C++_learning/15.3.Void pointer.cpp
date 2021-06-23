#include <iostream>
using namespace std;

int main()
{
    float n=19.3;
    void* pointer;
    pointer =&n;

    cout<<"the value of n :"<<n<<endl;
    cout<<"the Address of n :"<<&n<<endl;
    //cout<<"the value of pointer "<<*pointer<<endl;
    cout<<"the Address of pointer: "<<pointer<<endl;
    return 0;
}
