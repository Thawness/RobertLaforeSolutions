// ch5Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// convert struct data type to int or long.

include <iostream>

using namespace std;

struct times {
    int hours;
    int minutes;
    int seconds;
};

long time_to_sec(times t);
times sec_to_time(long s);

int main()
{
    times t1, t2, t3;
    char c;

    cout << "In [hh:mm:ss] format: \n";

    cout << "Enter first time value: ";
    cin >> t1.hours >> c >> t1.minutes >> c >> t1.seconds;

    cout << "Enter second time value: ";
    cin >> t2.hours >> c >> t2.minutes >> c >> t2.seconds;

    t3 = sec_to_time(time_to_sec(t1) + time_to_sec(t2));
    cout << "The result is: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds;

    return 0;
}

long time_to_sec(times t)
{
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

times sec_to_time(long s)
{
    times t;
    t.seconds = s % 60; t.minutes = ((s - t.seconds) % 3600) / 60; t.hours = s / 3600;
    if (t.seconds > 59) { t.seconds -= 59; t.minutes++; } // check seconds over
    if (t.minutes > 59) { t.minutes -= 59; t.hours++;  } // check minutes over
    return t;
}
