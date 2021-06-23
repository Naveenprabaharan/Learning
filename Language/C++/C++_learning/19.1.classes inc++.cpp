#include<iostream>
using namespace std;

class car{
private:
    int model;
    char color;
public:
    void function1()
    {
        model=2018;
    }
    char function2(){
    color="white";
    return color;
    }

};

int main()
{
    car obj1,obj2;

    return 0;
}
