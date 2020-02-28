#ifndef H_use
#define H_use

#include <iostream>
#include "date.h"

using namespace std;

class useDate : protected dateType
{
public:
	bool isLeapYear();
	int daysInMonth();
	int elapsedDays();
	int remainingDays();
	void newDate();
};

#endif