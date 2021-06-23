#include<iostream>
using namespace std;

class test
{
private:
    int x;
public:
    void set_x(int a)
    {
        this->x = a;
    }
    int get_x()
    {
        return x;
    }
};

int main()
{
    test tst;
    tst.set_x(10);
    cout<<"value of X is"<<tst.get_x();
    return 0;
}
