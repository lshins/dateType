#ifndef H_date
#define H_date

#include <iostream>

using namespace std;

class dateType
{
	int dMonth, dDay, dYear;

public:
	void setDate(int month, int day, int year);
	int getDay();
	int getMonth();
	int getYear();
	void printDate();
	dateType(int month = 1, int day = 1, int year = 1900);
};

#endif