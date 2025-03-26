/// \file main.cpp
///	\brief interface to the program
///	\author Gabriele Triglia
///
///	Details.
///

#include <iostream>
#include "CRectangle.h"

using namespace std;

/**
 * @brief funzione che disegna un rettangolo date le sue dimensioni
 * @param r istanza di rettangolo
 */
void rect_draw(Rectangle r)
{
	int larghezza = r.GetWidth();
	int altezza = r.GetHeight();

	cout << "\tStampa di rettangolo: " << larghezza << "x" << altezza << endl;
	cout << "     "; //spazi a sinistra 
	// stampa prima riga
	for (int i = 0; i < larghezza; i++)
	{
		cout << " . ";
	}
	cout << endl;
	// stampa righe interne
	for (int i = 0; i < altezza - 2; i++)
	{
		cout << "     "; //spazi a sinistra 
		for (int i = 0; i < larghezza; i++)
		{
			if(i == 0 || i == larghezza - 1){
				cout << " . ";
			} else {
				cout << "   ";
			}
		}
		cout << endl;
	}
	// stampa ultima riga
	cout << "     "; //spazi a sinistra 
	for (int i = 0; i < larghezza; i++)
	{
		cout << " . ";
	}
	cout << endl;
}

/**
 * @brief funzione main per interfaccia
 */
int main()
{

	Rectangle rectA(10, 5);
	// Rectangle rectB(3,7);
	rectA.SetText("Rettangolo1");
	// rectB.SetText("Rettangolo2");
	Rectangle rectB = rectA;

	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;

	cout << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump();
	cout << "****** ********* ******" << endl;

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

	cout << "Perimeter A : " << rectA.GetPerimeter() << endl;
	cout << "Area A : " << rectA.GetArea() << endl;
	cout << "Perimeter B : " << rectB.GetPerimeter() << endl;
	cout << "Area B : " << rectB.GetArea() << endl;

	cout << "\t\t\tDRAW RECTANGLES\n" << endl;

	rect_draw(rectA);
	rect_draw(rectB);

	return 0;
}