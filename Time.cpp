#include <string>
#include <iostream>
#include <vector>
#include <cmath>

#include "time.hpp"

using namespace std;

Time::Time(){
}

Time::~Time(){
}

int Time::getHour(int hour){
	return this->hour;
}

int TIme::getMinute(int minute){
	return this->minute;
}

void Time::setHour(int hourPassed){
	this->hour = hourPassed;
}

void Time::setMinute(int minutePassed){
	this->minute = minutePassed;
}


