#include<iostream>
using namespace std;

class stack{
private:
    int top;
public:
    int a[10];
    stack(){
    top=-1;
    }

    void push(int x);
    int pop();
    void isEmpty();
};

void stack::push(int x)
{
    if(top>=10)
    {
        cout<<"stck is over flow!\n";
    }
    else
        {
            a[++top]=x;
            cout<<"elemnet "<<x<<" is PUSHED!\n";
        }
}

int stack ::pop()
{
    if(top<0)
    {
        cout<<"stack is Underflow!\n";
    }
    else
    {
        int d=a[top];
        top--;
        cout<<"elemnet "<<d<<" is POPed!\n";
    }
}

void stack ::isEmpty()
{
    if(top<0)
    {
        cout<<"stack is EMPTY!\n";
    }
    else
    {
        cout<<"stack is notEMPTY!\n";
    }
}


int main()
{
    stack s1;
    s1.push(45);
    s1.push(67);
    s1.push(45);
    s1.push(67);
    s1.push(45);
    s1.push(67);
    s1.push(45);
    s1.push(67);
    s1.push(45);
    s1.push(67);
    s1.push(45);
    s1.push(45);
    s1.isEmpty();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.isEmpty();
    return 0;
}
