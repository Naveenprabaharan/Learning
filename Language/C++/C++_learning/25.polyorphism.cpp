#include<iostream>
using namespace std;

class polymorphism
{
public:
    int sum(int num1, int num2)
    {
        return num1+num2;
    }

    int sum(int num1, int num2,int num3)
    {
        return num1+num2+num3;
    }
};


int main()
{
    polymorphism obj;
    cout<<"obj.sum(9,10): "<<obj.sum(9,10)<<endl;
    cout<<"obj.sum(10,10,10): "<<obj.sum(10,10,10);
    return 0;
}
