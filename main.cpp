#include <iostream>
#include <bits/stdc++.h>
#include "Porsche.h"

using namespace std;

int main() {

	// Variable Declaration
	string make, name, trim, color;
	bool isAvailable;
	char isAvl;
	double price, californiaTax, porscheAPR;
	int years, porscheMileageWarranty, porscheYearWarranty;
	bool exit = false;
	int menu = 0, object = 0, index = 0;

	vector<Porsche> por;
	vector<Porsche>::iterator it;

	//Main menu
	while (exit == false) {
		cout << "Main Menu" << endl;
		cout << "----------------------------" << endl;
		cout << "1] Add a car information." << endl;
		cout << "2] Remove a car information." << endl;
		cout << "3] Estimate the price." << endl;
		cout << "4] Exit." << endl;
		cout << endl;
		cout << "Choice : ";
		cin >> menu;
		if (menu == 1) {
			cout << "Enter details for Car " << (object + 1) << endl;
			cout << "----------------------------" << endl;
			cout << "Enter car Name : ";
			cin >> name;
			cout << "Enter car Make : ";
			cin >> make;
			cout << "Enter car Year : ";
			cin >> years;
			cout << "Enter car Color : ";
			cin >> color;
			cout << "Enter car Trim : ";
			cin >> trim;
			cout << "Enter car Price : ";
			cin >> price;
			cout << "Enter car California tax : ";
			cin >> californiaTax;
			cout << "Enter car Available(Y/N) : ";
			cin >> isAvl;
			if(isAvl == 'Y'){
				isAvailable = true;
			}else if(isAvl == 'N'){
				isAvailable = false;
			}else{
				cout << "Invalid Input"<< endl;
				isAvailable = false;
			}
			cout << "Enter car APR : ";
			cin >> porscheAPR;
			cout << "Enter car Mileage Warranty : ";
			cin >> porscheMileageWarranty;
			cout << "Enter car Year Warranty : ";
			cin >> porscheYearWarranty;
			por.push_back(Porsche(years,make,name,trim,color,
					isAvailable,price,californiaTax,porscheAPR,
					porscheMileageWarranty,porscheYearWarranty));
			cout << "\nCar added successfully" << endl;
		} else if (menu == 2) {
			cout << "Enter index of the car : ";
			cin >> index;
			it = por.begin();
			for(int i = 0; i < index; i++){
				it++;
			}
			if(por.size() < (unsigned)(index)){
				cout << "Not a valid index!"<<endl;
			}else{
				por.erase(it);
				cout << "\nCar removed successfully" << endl;
			}
		} else if (menu == 3) {
			cout << "Enter index of the car : ";
			cin >> index;
			if(por.size() < (unsigned)(index)){
				cout << "Not a valid index!"<<endl;
			}else{
				cout << "Estimated price is "<< por.at(index-1).getPrice()+por.at(index-1).getCaliforniaTax() << "$" << endl;
			}
		} else if (menu == 4) {
			exit = true;
		} else {
			cout << "Invalid Option" << endl;
		}
		cout << endl;
	}

	return 0;
}
