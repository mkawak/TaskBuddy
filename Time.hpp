#ifndef TIME_H
#define TIME_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Time{
	public:
	int getHour();
	int getMinute();

	protected:

	private:
	int hour;
	int minute;
};


#endif
