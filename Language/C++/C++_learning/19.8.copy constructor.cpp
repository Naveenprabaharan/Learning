#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(int a,int b);//constructor
    Point(const Point &p1);//copy constructor
    int get_x();
    int get_y();
    ~Point();
};

Point::Point(int a,int b)
{
    x=a;
    y=b;
}

Point::Point(const Point &p1)
{
    x=p1.x;
    y=p1.y;
}

int Point::get_x()
{
    return x;
}

int Point::get_y()
{
    return y;
}


Point::~Point()
{
    cout<<"object has been Deleted";
}

int main()
{
    Point p1(10,15);
    Point p2 = p1;
    cout<<"p1.x: "<<p1.get_x()<<"p1.y: "<<p1.get_y()<<endl;
    cout<<"p2.x: "<<p2.get_x()<<"p2.y: "<<p2.get_y()<<endl;

    return 0;
}
