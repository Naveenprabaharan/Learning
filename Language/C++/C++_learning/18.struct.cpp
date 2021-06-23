#include<iostream>
using namespace std;

struct person{
char name[40];
int age;
float salary;
char city[40];
};

int main()
{

    person p1;

    cout<<"Enter person name: ";
    cin.get(p1.name,sizeof(p1.name));
    cout<<"Enter person age: ";
    cin>>p1.age;
    cout<<"Enter person Salary: ";
    cin>>p1.salary;
    cout<<"Enter person city: ";
    cin>>p1.city;


    cout<<"Displaying output"<<endl;
    cout<<"name: "<<p1.name<<endl;
    cout<<"age: "<<p1.age<<endl;
    cout<<"salary: "<<p1.salary<<endl;
    cout<<"city: "<<p1.city<<endl;

    return 0;
}
