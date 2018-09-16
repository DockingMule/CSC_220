//Austin Alloway
//CSC 220
//Assignment 1
//Purpose: Input date and output 3 different formats

#include <iostream>
#include "Date.h"  // Needed for Date class
using namespace std;

int main() {

	Date myDate; //Declare the object
	int month;
	int day;
	int year;
	cout << "Enter the month (1-12): ";
	cin >> month; //Input the month
	cout << "Enter the day (1-21): ";
	cin >> day; //Input the day
	cout << "Ente the year (0-2018): ";
	cin >> year;//Input the year
	myDate.setDate(month, day, year);
	system("CLS");
	cout << "----------------------------" << endl;
	cout << "month: " << month << endl;
	cout << "day: " << day << endl;
	cout << "year: " << year << endl;
	cout << "----------------------------" << endl;
	myDate.PrintFormat1(); //Display format: 9 / 20 / 2018
	cout << endl;
	myDate.PrintFormat2(); //Display format: September 9, 2018
	cout << endl;
	myDate.PrintFormat3(); //Display format: 9 September 2018
	cout << endl << "----------------------------" << endl;
	cout << endl;
	system("pause");
	return 0;
}