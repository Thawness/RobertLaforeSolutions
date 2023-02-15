#include <iostream>

using namespace std;

struct timee{
    int hours, minutes, seconds;
};

void swap(timee&, timee&);

int main(){

    timee time1, time2;
    char ch;

    cout << "Enter 1st time in hh:mm:ss format: ";
    cin >> time1.hours >> ch >> time1.minutes >> ch >> time1.seconds;

    cout << "\nEnter 2nd time in hh:mm:ss format: ";
    cin >> time2.hours >> ch >> time2.minutes >> ch >> time2.seconds;

    cout << "\nBefore swap:";
    cout << "\n1st time is : " << time1.hours << ch << time1.minutes << ch << time1.seconds;
    cout << "\n2nd time is : " << time2.hours << ch << time2.minutes << ch << time2.seconds;


    swap(time1, time2);
    cout << "\n\nAfter swap:" << endl;
    cout << "1st time is : " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
    cout << "2nd time is : " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;
    return 0;
}

void swap(timee& time1, timee& time2){
    time1.hours = time1.hours+time2.hours;
    time2.hours = time1.hours-time2.hours;
    time1.hours = time1.hours-time2.hours;

    time1.minutes = time1.minutes+time2.minutes;
    time2.minutes = time1.minutes-time2.minutes;
    time1.minutes = time1.minutes-time2.minutes;

    time1.seconds = time1.seconds+time2.seconds;
    time2.seconds = time1.seconds-time2.seconds;
    time1.seconds = time1.seconds-time2.seconds;
}
