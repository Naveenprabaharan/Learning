#include<iostream>
using namespace std;

class Example
{
private:
    int value;
public:
    void initi_value(int val);
    void print_value();
};


void Example::initi_value(int val)
{
    value = val;
}

void Example::print_value()
{
    cout<<"the value is:"<<value;
}

int main()
{
    Example obj1;

    obj1.initi_value(100);
    obj1.print_value();

    return 0;
}
