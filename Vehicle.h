/*
 * Vehicle.h
 *
 *  Created on: Aug 22, 2020
 *      Author: DEVILsPC
 */

#ifndef Vehicle_h

#define Vehicle_h

#include <string>

using namespace std;

class Vehicle

{

private:

	int years;

	string make;

	string name;

	string trim;

	string color;

	bool isAvailable;

	double price;

	double californiaTax;

public:

	Vehicle(int, string, string, string, string, bool, double, double);

	~Vehicle();

	bool setYears(int);

	void setMake(string);

	void setName(string);

	void setTrim(string);

	void setColor(string);

	void setIsAvailable(bool);

	bool setPrice(double);

	bool setCaliforniaTax(double);

	int getYears();

	string getMake();

	string getName();

	string getTrim();

	string getColor();

	bool getIsAvailable();

	double getPrice();

	double getCaliforniaTax();

};

#endif /* Vehicle_h */
