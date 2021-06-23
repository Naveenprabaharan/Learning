#include<iostream>
using namespace std;

class Example
{
protected:
    int value;
};

class example2:public Example
{
public:

    void initi_val(int a)
    {
        this-> value=a;
    }
    void print_val()
    {
        cout<<"the value is : "<<value;
    }
};


int main()
{
    example2 obj1;
    obj1.initi_val(100);
    obj1.print_val();
    return 0;
}
