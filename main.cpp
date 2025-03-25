#include<iostream>
#include "CRectangle.h"

using namespace std;


int main() {

	//2 oggetti rettangolo
	Rectangle rectA(10,5); 
	Rectangle rectB(3,7); 
		
	//faccio il dump per visualizzare le proprietà dei due rettangoli
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump(); 
	cout << "****** ********* ******" << endl;
	
	cout << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump(); 
	cout << "****** ********* ******" << endl;
	
	//cambio base rectA e altezza tecB
	rectA.SetWidth(9);
	rectB.SetHeight(15);
		
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;
	
	cout << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump();
	cout << "****** ********* ******" << endl;
	
	//stampo perimetro e area dei due rettangoli
	cout << "Perimeter A : " << rectA.GetPerimeter() << endl; 
	cout << "Area A : " << rectA.GetArea() << endl; 
	cout << "Perimeter B : " << rectB.GetPerimeter() << endl; 
	cout << "Area B : " << rectB.GetArea() << endl;

	return 0;

}