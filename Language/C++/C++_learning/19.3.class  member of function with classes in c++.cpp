#include<iostream>
using namespace std;

class car{
public:
    string name;
    int model;

    void print_name();
    void print_model()
    {
        model = 2019;
        cout<<"Car Model is: "<<model<<endl;
    }
};

void car::print_name()
{

    cout<<"Car Name is: "<<name<<endl;
}

int main()
{
    car obj1,obj2;

    obj1.model = 2020;
    obj1.name = "AUDI";

    obj1.print_model();
    obj1.print_name();


    return 0;
}

