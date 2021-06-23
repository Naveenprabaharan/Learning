#include<iostream>
using namespace std;

struct Distance{
    float feet;
    int inch;
};

int main()
{
    Distance *ptr, d;
    ptr = &d;

    cout<<"Enter the Feet:";
    cin>>(*ptr).feet;
    cout<<"Enter the Inch:";
    cin>>(*ptr).inch;


    cout<<"---Displaying the OUTPUT---\n";
    cout<<"Distance : "<<(*ptr).feet<<" In FEET, "<<(*ptr).inch<<" In INCH";
    return 0;
}
