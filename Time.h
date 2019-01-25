#include <iostream>
#include <string>
#include <chrono>
#include <windows.h>

using namespace std;


class Time
{
private:
	int m_compteur;
	int m_maxTime;

public:
	Time(int max);
	int getTime();
	int getMaxTime();
	void increaseTime();
	virtual ~Time();
};
