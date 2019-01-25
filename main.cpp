#include <iostream>
#include "Time.h"
#include <thread>

using namespace std;

int main()
{
    cout << "Hello World!\n"; 
	thread time1(&Time::increaseTime, Time(30)); // compte jusqu'a 60
	thread time2(&Time::increaseTime, Time(30)); // compte jusqu'a 10 a partir de time1 = 30
	time1.join();
	time2.join();
	cout << "Bye Bye World!\n";
	system("pause");
	return 0;
}
