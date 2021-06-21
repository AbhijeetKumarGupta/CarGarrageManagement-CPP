#include <iostream>

#include <string>

#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int ye, string ma, string na, string tr, string co, bool isA,
		double pr, double caT)

		{

	years = ye;

	make = ma;

	name = na;

	trim = tr;

	color = co;

	isAvailable = isA;

	price = pr;

	californiaTax = caT;

}

Vehicle::~Vehicle()

{

//destructor

}

bool Vehicle::setYears(int ye)

{

	bool isValid;

	if (ye > 1995)

	{

		years = ye;

		isValid = true;

	}

	else

	{

		isValid = false;

	}

	return isValid;

}

void Vehicle::setMake(string ma)

{

	make = ma;

}

void Vehicle::setName(string na)

{

	name = na;

}

void Vehicle::setTrim(string tr)

{

	trim = tr;

}

void Vehicle::setColor(string co)

{

	color = co;

}

void Vehicle::setIsAvailable(bool isA)

{

	isAvailable = isA;

}

bool Vehicle::setPrice(double pr)

{

	bool isValid;

	if (pr > 0)

	{

		price = pr;

		isValid = true;

	}

	else

	{

		isValid = false;

	}

	return isValid;

}

bool Vehicle::setCaliforniaTax(double caT)

{

	bool isValid;

	if (caT > 0)

	{

		californiaTax = caT;

		isValid = true;

	}

	else

	{

		isValid = false;

	}

	return isValid;

}

int Vehicle::getYears()

{

	return years;

}

string Vehicle::getMake()

{

	return make;

}

string Vehicle::getName()

{

	return name;

}

string Vehicle::getTrim()

{

	return trim;

}

string Vehicle::getColor()

{

	return color;

}

bool Vehicle::getIsAvailable()

{

	return isAvailable;

}

double Vehicle::getPrice()

{

	return price;

}

double Vehicle::getCaliforniaTax()

{

	return californiaTax;

}
