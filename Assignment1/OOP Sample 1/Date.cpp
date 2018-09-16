#include "Date.h"   // Needed for the Date class
#include <iostream>      // Needed for cout
#include <string>
#include <cstdlib>       // Needed for the exit function
using namespace std;

//******************************************************
// Constructer initializes month, day, and year         *
//******************************************************
Date::Date() {
	mo = 0;
	day = 0;
	yr = 0;
}
//******************************************************
// Set month, day, and year based off input             *
//******************************************************
void Date::setDate(int month, int dayin, int year)
{
	if ((0 < month && month < 13) && (0 < dayin && dayin < 32)&&
		(0 < year)) {
		mo = month;
		day = dayin;
		yr = year;
	}
	else
	{
		cout << "Invalid Date!\n";
		exit(EXIT_FAILURE);
	}
}
//******************************************************
// Print date in format 1  9/20/2018                    *
//******************************************************
void Date::PrintFormat1()const {
	cout << "Format 1 Dispaly = " <<
		mo << "/" << day << "/" << yr;
}
//******************************************************
// Print date in format 2  September 9, 2018            *
//******************************************************
void Date::PrintFormat2()const {
	string monthName;
	switch (mo) {
	case 1: monthName = "January";
		break;
	case 2: monthName = "February";
		break;
	case 3: monthName = "March";
		break;
	case 4: monthName = "April";
		break;
	case 5: monthName = "May";
		break;
	case 6: monthName = "June";
		break;
	case 7: monthName = "July";
		break;
	case 8: monthName = "August";
		break;
	case 9: monthName = "September";
		break;
	case 10: monthName = "October";
		break;
	case 11: monthName = "November";
		break;
	case 12: monthName = "December";
	}
	cout << "Format 2 Display = " << monthName <<
		", " << day << " " << yr;
}
//******************************************************
// Print date in format 3     9 september 2018          *
//******************************************************
void Date::PrintFormat3()const {
	string monthName;
	switch (mo) {
	case 1: monthName = "January";
		break;
	case 2: monthName = "February";
		break;
	case 3: monthName = "March";
		break;
	case 4: monthName = "April";
		break;
	case 5: monthName = "May";
		break;
	case 6: monthName = "June";
		break;
	case 7: monthName = "July";
		break;
	case 8: monthName = "August";
		break;
	case 9: monthName = "September";
		break;
	case 10: monthName = "October";
		break;
	case 11: monthName = "November";
		break;
	case 12: monthName = "December";
	}
	cout << "Format 3 Display = " << day <<
		" " << monthName << " " << yr;
}