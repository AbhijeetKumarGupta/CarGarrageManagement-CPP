/*
 * Porsche.h
 *
 *  Created on: Aug 22, 2020
 *      Author: DEVILsPC
 */

#ifndef PORSCHE_H_
#define PORSCHE_H_

#ifndef Porsche_h

#define Porsche_h

#include <string>
#include "Vehicle.h"

using namespace std;

class Porsche: public Vehicle

{

private:

	double porscheAPR;

	int porscheMileageWarranty;

	int porscheYearWarranty;

public:

	Porsche(int, string, string, string, string, bool, double, double, double,
			int, int);

	bool setPorscheAPR(double);

	bool setPorshceMileageWarranty(int);

	bool setPorscheYearWarranty(int);

	double getPorscheAPR();

	int getPorscheMileageWarranty();

	int getPorscheYearWarranty();

};

#endif /* Porsche_h */

#endif /* PORSCHE_H_ */
