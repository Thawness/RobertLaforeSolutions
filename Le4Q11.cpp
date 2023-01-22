// Le4Q11.cpp
// add two time values of time values of type struct 

#include <iostream>

struct Time {
	int hours;
	int minutes;
	int seconds;
	int days; // if sum of time exceeds 24 hours
	char dummychar;
};

int main()
{
	Time t1, t2, t3;
	float temphours, frachours, tempminutes, fracminutes, totaltime = 0.0;

	std::cout << "enter the first time value in hh:mm:ss : ";
	std::cin >> t1.hours >> t1.dummychar >> t1.minutes >> t1.dummychar >> t1.seconds;

	std::cout << "enter the second time value in hh:mm:ss : ";
	std::cin >> t2.hours >> t2.dummychar >> t2.minutes >> t2.dummychar >> t2.seconds;

	t1.seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	t2.seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	/*std::cout << "t1.hours = " << t1.hours << "\nt1.minutes = " << t1.minutes << "\nt2.hour = " << t2.hours << "\nt2.minutes = " << t2.minutes << std::endl;*/
	totaltime = static_cast <float> (t1.seconds + t2.seconds); 
	//std::cout << "total time in seconds = " << totaltime;
	temphours = totaltime / 3600;
	t3.hours = static_cast <int> (temphours);
	frachours = temphours - t3.hours;
	
	tempminutes = frachours * 60;
	t3.minutes = static_cast <int> (tempminutes);
	fracminutes = tempminutes - t3.minutes;

	t3.seconds = static_cast <int> (fracminutes * 60);

	if (t3.hours > 24)
	{
		t3.days = t3.hours / 24;
		t3.hours = t3.hours % 24;
		std::cout << "\n\nTotal time in dd:hh:mm:ss format is: " << t3.days << ":" << t3.hours << ":" << t3.minutes << ":" << t3.seconds << std::endl;
	}
	else
		std::cout<< "\n\nTotal time in hh:mm:ss format is: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds << std::endl;

return 0;
}