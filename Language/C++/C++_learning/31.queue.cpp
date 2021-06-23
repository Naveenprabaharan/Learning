#include<iostream>
using namespace std;
#define SIZE 10

class queue
{
private:
    int a[SIZE];
    int front;
    int rear;
public:
    queue()
    {
        front=rear=-1;
    }
    void enqueue(int x);
    void dequeue();
    void display();

};

void queue :: enqueue(int x)
{
    if(front==-1)
    {
        front++;
    }
    if(rear==SIZE-1)
    {
        cout<<"QUEUE is full!\n";
    }
    else
    {
        a[++rear] = x;
        cout<<"element "<<x<<" is ENQUEUE!\n";
    }
}


void queue :: dequeue()
{
    int d = ++front;
    cout<<"element "<<d<<" is DEQUEUE!\n";
}


void queue :: display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<a[i]<<"->";
    }
    cout<<endl;
}

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
