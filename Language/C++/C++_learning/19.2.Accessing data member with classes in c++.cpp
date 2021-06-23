#include<iostream>
using namespace std;

class Box{
public:
    double length;
    double height;
    double width;
};

int main()
{
    Box box1;
    Box box2;
    double volume;
    //declaring value to boxes:
    box1.height=10.3;
    box1.length=10.1;
    box1.width = 21.3;

    box2.height=31.2;
    box2.length=10.0;
    box2.width = 11.11;

    volume = box1.height*box1.width*box1.length;
    cout<<"volume of box 1: "<<volume<<endl;
    volume = box2.height*box2.width*box2.length;
    cout<<"volume of box 2: "<<volume<<endl;

    return 0;
}
