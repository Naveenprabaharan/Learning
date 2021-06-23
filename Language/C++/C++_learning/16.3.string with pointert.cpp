#include <iostream>
using namespace std;

int main()
{
    char name[20]="learnin";
    char *ptr;
    ptr = name;

    while(*ptr != '\o')
    {
        cout<<*ptr;
        ptr++;
    }

    return 0;
}
