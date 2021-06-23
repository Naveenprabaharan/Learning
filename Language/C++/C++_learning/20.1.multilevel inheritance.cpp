#include<iostream>
using namespace std;

class shape
{
protected:
    int height;
    int width;
public:
    void get_height(int a)
    {
        height = a;
    }
    void get_width(int a)
    {
        width = a;
    }
};

class rectange : public shape
{
  public:
      int area_rect()
      {
          return width*height;
      }
};

class cost : public rectange
{
  public:
      int area_cost()
      {
          int costrs =20;
          return (costrs*area_rect());
      }
};




int main()
{
    cost rect;
    rect.get_height(2);
    rect.get_width(2);
    cout<<rect.area_cost();
    return 0;
}
