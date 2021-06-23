#include<iostream>
using namespace std;

class Distance
{
private:
    int meter;
public:
    Distance():meter(0){}
    friend int addFive(Distance d);
};

int addFive(Distance d)
{
    d.meter +=5;
}

int main()
{
    Distance d;
    cout<<"add five fumction+=5 :"<<addFive(d);
    return 0;
}
