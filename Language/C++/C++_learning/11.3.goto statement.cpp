  #include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter Number:";
    cin>>num;



    if(num %2==0)
    {
        goto print_even;
    }
    else
    {
        cout<<"it is odd number";
    }
    return 0;
    print_even:
        cout<<"Even Number";
}
