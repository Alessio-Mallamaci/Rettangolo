#include<iostream>
#include<cstring>

#include "CRectangle.h"

using namespace std;

int main() {

	
	Rectangle rectA(10,5);
	Rectangle rectB(3,7);
	Rectangle rectC;
	
	char msg1[1000];
	int size = strlen("prova A");
	memcpy(msg1,"prova A",size); 
	msg1[size]='\0';

	char msg2[1000];
	size = strlen("prova B");
	memcpy(msg2,"prova B",size); 
	msg2[size]='\0';
	
	rectA.SetText(msg1);
	rectB.SetText(msg2);
		
	
	cout << endl;
	cout << "rectangle A" << endl;
	rectA.Dump();

	cout << endl;	
	cout << "rectangle B" << endl;
	rectB.Dump();

	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();

			
	rectC=rectA; 
	
	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();

	
	
	
	if (rectA == rectC) 
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;
		
	
	return 0;

}