/// \file CRectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include<iostream> 
#include "CRectangle.h"
using namespace std;

/// @brief default constructor 
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl; //ha solo utilità didattica

	Init(); //inizializza un rettangolo (di dimensione (0,0)

}

/// @brief constructor with 2 parameters
/// @param w width of the rectangle
/// @param h height of the rectangle
Rectangle::Rectangle(float w, float h) {

	Init();

	cout << "Rectangle - constructor" << endl;

	//controlla parametri di w e h (se ne potrebbero fare più controlli, ma questo è quello minimale)
	if (w <= 0. || h <= 0.) {
		WarningMessage("constructor: width and height should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(w,h);

}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;
	Reset(); // riporta tutto a (0,0)

}


/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Rectangle::Rectangle(const Rectangle &r) { //uso "const" perchè il parametro che ti sto passando NON voglio che venga modificato

	cout << "Rectangle - copy constructor" << endl;

	Init(r); //costruisco un oggetto rettangolo che ne faccia una copia sulla base dei due parametri passati in input
	
}


/// @brief default initialization of the object
void Rectangle::Init() {
	Reset();
	
}


//Init e Reset collaborano per inizializzare un rettangolo di dimensione (0,0)
//----------------------------------------
/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rectangle::Init(const Rectangle &r) {
		
	Reset();
	SetDim(r.width,r.height); 
	
}

/// @brief total reset of the object  
void Rectangle::Reset() {
	
	SetDim(0,0);
	
}
//--------------------------


/*
A ogni "set", faccio un controllo di quello che sto passando
A ogni "get" ritornano i parametri che mi hai chiesto
*/
//----------------------------------------------------------------------
/// @brief set width of the object
/// @param w width 
void Rectangle::SetWidth(float w) {

	if (w < 0.) {
		WarningMessage("SetWidth: width should be > 0");
		return;
	}

	SetDim(w,height);

}

/// @brief set length of the object
/// @param h height 
void Rectangle::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}

	SetDim(width,h);

}



/// @brief get width of the object
/// @return width 
float Rectangle::GetWidth() {

	return width;

}

/// @brief get length of the object
/// @return height
float Rectangle::GetHeight() {

	return height;
}

/// @brief set width and length of the object
/// @param w width 
/// @param h height
void Rectangle::SetDim(float w, float h) {

	width = w;
	height = h;  
	
	return;
}

/// @brief get width and length of the object
/// @param w width 
/// @param h height
void Rectangle::GetDim(float &w, float &h) {

	w = width;
	h = height; 
	
	return;
}
//----------------------------------------------------------------------


/// @brief computes the area of the object
/// @return the area 
float Rectangle::GetArea() {
	
	return (width*height);
}

/// @brief computes the perimeter of the object
/// @return the area 
float Rectangle::GetPerimeter() {
	
	return (2*(width+height));
}


/// @brief write an error message 
/// @param string message to be printed
void Rectangle::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Rectangle --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rectangle::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}

//FUNZIONE DI SERVIZIO --> ti dice tutto riguardo una classe
//----------------------------------------------------------
/// @brief for debugging: all about the object
void Rectangle::Dump() {
	cout << endl;
	cout << "---Rectangle---" << endl; 
	cout << endl;
	
	cout << "Width = " << width << endl;
	cout << "Heigth = " << height << endl;
	
	
	cout << endl;

}
//----------------------------------------------------------






