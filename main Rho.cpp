#include<iostream>
#include<cstring>

#include "CRectangle.h"
#include "CRhombus.h"

using namespace std;

int main() {

	
	Rhombus rhoA(4,1);
	Rhombus rhoB(4,2);
	Rhombus rhoC=rhoA;

	cout << endl;
	cout << "rhombus A" << endl;
	rhoA.Dump();

	cout << endl;	
	cout << "rhombus B" << endl;
	rhoB.Dump();

	cout << endl;	
	cout << "rhombus C" << endl;
	rhoC.Dump();

	rhoC = rhoB;
	
	if (rhoC == rhoB) 
		cout<< "B e C sono uguali" << endl;
	else 
		cout<< "B e C sono diversi" << endl;
		
	if (rhoC == rhoA) 
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;


	rhoC.SetDim(9,2);
	rhoA.SetDim(9,2);

	if (rhoC == rhoA) 
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;

	return 0;

}