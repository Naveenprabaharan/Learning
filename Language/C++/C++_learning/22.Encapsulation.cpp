#include<iostream>
using namespace std;

class Encapsulation
{
private:
    int x;
public:
    void set_x(int a)
    {
        x = a;
    }
    int get_x() const
    {
        return x;
    }
};


int main()
{
    Encapsulation obj;
    obj.set_x(10);
    cout<<obj.get_x();
    return 0;
}
