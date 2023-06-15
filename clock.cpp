#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int hour , min , sec;
    cout << "Hours ";
    cin >> hour;
    cout << "Minutes ";
    cin >> min ;
    cout << "Seconds ";
    cin >> sec;
    while(1){
            system("cls");
        if(sec>59){
            min++;
            sec = 0;
        }
        if(min>59){
            hour++;
            min = 0 ;
        }
        if(hour>23){
            hour++;
            hour = 0;}
        cout << hour << ":" << min <<":"<< sec<< endl;
    sec++;
    Sleep(900);
    }
    return 0;
}
