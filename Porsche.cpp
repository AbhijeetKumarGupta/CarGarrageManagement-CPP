#include <iostream>

#include "Porsche.h"
#include "Vehicle.h"

using namespace std;

Porsche::Porsche(int ye, string ma, string na, string tr, string co, bool isA,
		double pr, double caT, double pA, int pMW, int pYW) :
				Vehicle(ye, ma, na, tr, co, isA, pr, caT)

{

	porscheAPR = pA;

	porscheMileageWarranty = pMW;

	porscheYearWarranty = pYW;

}

bool Porsche::setPorscheAPR(double pA)

{

	bool isValid;

	if (pA > 0)

	{

		porscheAPR = pA;

		isValid = true;

	}

	else

	{

		isValid = false;

	}

	return isValid;

}

bool Porsche::setPorshceMileageWarranty(int pMW)

{

	bool isValid;

	if (pMW > 0)

	{

		porscheMileageWarranty = pMW;

		isValid = true;

	}

	else

	{

		isValid = false;

	}

	return isValid;

}

bool Porsche::setPorscheYearWarranty(int pYW)

{

	bool isValid;

	if (pYW > 0)

	{

		porscheYearWarranty = pYW;

		isValid = true;

	}

	else

	{

		isValid = false;

	}

	return isValid;

}

int Porsche::getPorscheMileageWarranty()

{

	return porscheMileageWarranty;

}

int Porsche::getPorscheYearWarranty()

{

	return porscheYearWarranty;

}
