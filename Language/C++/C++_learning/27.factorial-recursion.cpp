#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }

}

int main()
{
    int n;
    cout<<"enter the no to find factorial";
    cin>>n;
    cout<<"factoarial for "<<n<<" is: "<<factorial(n);
    return 0;
}
