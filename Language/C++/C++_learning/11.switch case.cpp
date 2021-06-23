#include<iostream>
using namespace std;

int main()
{
    char o;
    cout<<"Enter the operand to perform operation (+,-,*,/):";
    cin>>o;

    float n1,n2;
    cout<<"Enter the two Numbers:";
    cin>>n1;
    cin>>n2;

    switch(o)
    {
        case '+':
        {
            cout<<n1<<" + "<<n2<<" = "<<n1+n2;
            break;
        }

        case '-':
        {
            cout<<n1<<" - "<<n2<<" = "<<n1-n2;
            break;
        }

        case '*':
        {
            cout<<n1<<" * "<<n2<<" = "<<n1*n2;
            break;
        }

        case '/':
        {
            cout<<n1<<" / "<<n2<<" = "<<n1/n2;
            break;
        }

        default:
            {
                cout<<"Enter the valid input!";
                break;
            }

    }
    return 0;
}
