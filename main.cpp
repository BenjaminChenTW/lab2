#include <iostream>
#include <fstream>
#include <cstdlib>
#include "a.h"

using namespace std;

int main()
{	
	float height, mass;
	BMIcul bmi;
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr << "Failed Input." << endl;
		exit(1);
	}
	ofstream outFile("file.out", ios::out);
	if(!outFile){
		cerr << "Failed Output" << endl;
		exit(2);
	}
	cout << "Processing..." << endl;
	while (inFile >> height >> mass){
		//cout << height << '\t' << mass << endl;
		if (height ==0 && mass ==0)
			break;
		bmi.set(height, mass);
		outFile << bmi.BMIvalue() << '\t' << bmi.category() << endl;
		bmi.get();
	}
	cout << "Success!"<< endl; 
	return 0;
}
