#include<iostream>
using namespace std;

//base class
class shape
{
protected:
    int width;
    int height;
public:
    void set_width(int a)
    {
        width = a;
    }
    void set_height(int b)
    {
        height = b;
    }
};

//inheritance class
class rectangle : public shape
{
public:
    int getarea()
    {
        return (height*width);
    }
};


int main()
{
    rectangle rect;
    rect.set_height(10);
    rect.set_width(22);
    cout<<"Area of rectangle is: "<<rect.getarea();
    return 0;
}
