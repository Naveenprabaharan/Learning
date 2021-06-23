#include<iostream>
using namespace std;

class line{
private:
    double length;
public:
    void set_length(double len);
    double get_length();
    line();
    ~line();
};

////define class function
void line::set_length(double len)
{
    length = len;
}

double line::get_length()
{
    return length;
}


line::line()
{
    cout<<"object is created!"<<endl;
}

line::~line()
{
    cout<<"\nobject is Deleted!"<<endl;
}

int main()
{
    line line1;

    line1.set_length(12.4);
    cout<<line1.get_length();


    return 0;
}
