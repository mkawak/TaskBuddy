#include <string>
#include <iostream>
#include <vector>
#include <cmath>

#include "Date.hpp"

using namespace std;

Date::Date(int monthPassed, int dayPassed, int yearPassed){
}

Date::~Date(){
}

int Date::getMonth(int month){
	return this->month;
}

int Date::getDay(int day){
	return this->day;
}

int Date::getYear(int year){
	return this->year;
}

void Date::setMonth(Date monthPassed){
	this->month = monthPassed;
}

void Date::setDay(Date dayPassed){
	this->day = dayPassed;
}

void Date::setYear(Date yearPassed){
	this->year = yearPassed;
}
