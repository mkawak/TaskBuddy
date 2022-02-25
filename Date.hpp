#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Date{
	public:
	int getMonth();
	int getDay();
	int getYear();
	
	protected:

	private:
	int month;
	int day;
	int year;
};


#endif
