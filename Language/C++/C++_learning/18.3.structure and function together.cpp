#include<iostream>
using namespace std;

struct person{
    char name[50];
    int age;
    float salary;
};

void displayPerson(person p);

int main()
{
    person p;
    cout<<"Enter person Name:";
    cin.get(p.name,sizeof(p.name));
    cout<<"Enter person age:";
    cin>>p.age;
    cout<<"Enter person Salary:";
    cin>>p.salary;

    displayPerson(p);

    return 0;
}

void displayPerson(person p)
{
    cout<<"---Displaying Person Information---\n";
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary<<endl;

}
