#include "Time.h"

Time::Time(int max):  m_maxTime(max)
{
	m_compteur = 0;
	cout << getTime() << endl;
	increaseTime();
}

int Time::getTime()
{
	return m_compteur;
}

int Time::getMaxTime()
{
	return m_maxTime;
}

void Time::increaseTime() // Augmente le temps de 1s durant X secondes
{
	for (auto runUntil = chrono::system_clock::now() + chrono::seconds(m_maxTime);
		chrono::system_clock::now() < runUntil;)
	{
		Sleep(1000);
		m_compteur++;
		cout << getTime() << endl;
	}
}

Time::~Time()
{

}
