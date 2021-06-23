#include<ctime>
#include <iostream>
using namespace std;

int main()
{
    time_t now = time(0);
    tm *ltm=localtime(&now);
    char *dt ;
    dt =ctime(&now);
    cout<<"since jan 1 1970 sec are : "<<now<<endl;
    cout<<"time :"<<dt<<endl;

    cout<<"Year :"<<ltm->tm_year<<endl;
    cout<<"month :"<<ltm->tm_mon<<endl;
    cout<<"DAy :"<<ltm->tm_mday<<endl;
    cout<<"Hour :"<<ltm->tm_hour<<endl;
    cout<<"Min :"<<ltm->tm_min<<endl;
    cout<<"Sec :"<< ltm->tm_sec<<endl;


    return 0;

}
