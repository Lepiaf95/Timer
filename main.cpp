#include <iostream>
#include "Time.h"
#include <thread>

using namespace std;

int main()
{
    cout << "Hello World!\n"; 
	thread time1(&Time::increaseTime, Time(10)); // compte jusqu'a 10
	thread time2(&Time::increaseTime, Time(5)); // compte jusqu'a 10 a partir de time1 = 5
	cout << "briovnreibvervep" << endl;
	time1.join();
	cout << "ieruhpeiurhferi" << endl;
	time2.join();
	cout << "Bye Bye World!\n";
	system("pause");
	return 0;
}
