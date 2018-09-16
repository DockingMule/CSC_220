#ifndef DATE_H
#define DATE_H

// Date class declaration.

class Date
{
private:
	//Private data and function members
	int mo;
	int day;
	int yr;
public:
	Date();
	//Constructor to set mo = 0, day = 0, yr = 1000
	void setDate(int, int, int);//Date is set according to the incoming parameter
	void PrintFormat1()const;//Prints in format: 9 / 20 / 2018
	void PrintFormat2()const;//Prints in format: September 9, 2018
	void PrintFormat3()const;//Prints in format: 9 September 2018
};

#endif