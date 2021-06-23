#include<ctime>
#include <iostream>
using namespace std;

int main()
{
    time_t now = time(0);
    char *dt = ctime(&now);

    cout<<"current time:"<<dt;

    //converting utc time

    tm *gmtm = gmtime(&now);
    dt=asctime(gmtm);
     cout<<"UTC current time:"<<dt;


    return 0;

}
