/// \file CRectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///
 
#include <iostream>     // Per input/output standard
#include <cstring>      // Per operazioni su stringhe C (memcpy, strlen)
#include "CRectangle.h" // Inclusione dell’header associato alla classe

using namespace std;

/// @brief default constructor 
// Implementazione costruttore di default
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;
	
	Init(); // Chiamata a Init() per inizializzazione standard (larghezza/altezza a 0, testo vuoto)
}

/// @brief constructor 
/// @param w width of the rectangle
/// @param h height of the rectangle
// Implementazione costruttore parametrico
Rectangle::Rectangle(float w, float h) {

	Init(); // Inizializza memoria e valori di default

	cout << "Rectangle - constructor" << endl;

	// Se i valori sono non validi, stampa un warning e assegna zero
	if (w <= 0. || h <= 0.) {
		WarningMessage("constructor: width and height should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(w,h); // Altrimenti imposta i valori passati

}

/// @brief destructor 
// Implementazione distruttore
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;
	Reset(); // Libera risorse (testo dinamico) e azzera dimensioni

}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
// Implementazione operatore di assegnazione
Rectangle& Rectangle::operator=(const Rectangle &r) { 

	cout << "Rectangle - operator =" << endl;
	
	Init(r); // Inizializza copiando dimensioni e testo da un altro rettangolo
	
	return *this; // Restituisce riferimento a se stesso (per concatenazione)
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
// Implementazione operatore di confronto
bool Rectangle::operator==(const Rectangle &r) { 

	// Confronta solo larghezza e altezza
	if (r.width == width && r.height == height)
		return true;
		
	return false;
}


/// @brief copy constructor 
/// @param o reference to the object that should be copied 
// Implementazione costruttore di copia
Rectangle::Rectangle(const Rectangle &r) { 

	cout << "Rectangle - copy constructor" << endl;

	Init(r); // Copia dimensioni e testo
	
}


/// @brief default initialization of the object
//Inizializzazione standard 
void Rectangle::Init() {

	text = new char [1000]; // Alloca spazio per una stringa fino a 999 caratteri + terminatore

	if (text == NULL) {
		ErrorMessage("Init - memory allocation failed");
		return;
	}

	SetText(""); // Imposta testo vuoto
	SetDim(0,0); // Azzera dimensioni
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
//Implementazione inizializzazione di copia
void Rectangle::Init(const Rectangle &r) {
	
	Init(); // Alloca memoria e imposta valori iniziali
	SetDim(r.width,r.height); // Copia le dimensioni
	SetText(r.text); // Copia il contenuto del testo
}

/// @brief total reset of the object
//Implementazoine reset completo
void Rectangle::Reset() {
	
	if (text != NULL) 
		delete text; // Libera la memoria dinamica
	
	text = NULL; // Evita dangling pointer
	SetDim(0,0); // Azzera dimensioni
	
}


/// @brief set width of the object
/// @param w width 
// Implementazione setter larghezza
void Rectangle::SetWidth(float w) {

	if (w < 0.) {
		WarningMessage("SetWidth: width should be > 0");
		return;
	}

	SetDim(w,height); // Modifica solo la larghezza mantenendo l’altezza attuale
}

/// @brief set length of the object
/// @param h height 
//Implementazoine setter altezza
void Rectangle::SetHeight(float h) {

	if (h < 0.) {
		WarningMessage("SetHeight: height should be > 0");
		return;
	}

	SetDim(width,h); // Modifica solo l’altezza mantenendo la larghezza attuale
}

/// @brief set width and length of the object
/// @param w width 
/// @param h height
// Implementazione setter dimensioni complete (altezza e larghezza)
void Rectangle::SetDim(float w, float h) {

	width = w;
	height = h;  
	
	return;
}

/// @brief get width of the object
/// @return width
// Implementazione getter larghezza
float Rectangle::GetWidth() {

	return width;
}

/// @brief get length of the object
/// @return height
// Implementazione getter altezza
float Rectangle::GetHeight() {

	return height;
}

/// @brief get width and length of the object
/// @param w width 
/// @param h height
// Implementazione getter di larghezza e altezza via referenza
void Rectangle::GetDim(float &w, float &h) {

	w = width;
	h = height; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
// Calcolo area
float Rectangle::GetArea() {
	
	return (width*height); // Area = base * altezza
}

/// @brief computes the perimeter of the object
/// @return the perimeter
// Calcolo perimetro
float Rectangle::GetPerimeter() {
	
	return (2*(width+height)); // Perimetro = 2 * (base + altezza)
}


/// @brief write an error message 
/// @param string message to be printed
// Stampa messaggio di errore
void Rectangle::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Rectangle --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
//Stampa messaggio di avviso
void Rectangle::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Rectangle --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
//Stampa tutte le informazioni dell'oggetto
void Rectangle::Dump() {
	cout << endl;
	cout << "---Rectangle---" << endl; 
	cout << endl;
	
	cout << "Width = " << width << endl;
	cout << "Heigth = " << height << endl; 
	if (text != NULL)
		cout << "Text = " << text << endl;
	
	cout << endl;
}

//Implementazione setter testo
void Rectangle::SetText(const char* string) {

	int size = strlen(string); // Calcola lunghezza della stringa
	memcpy(text,string,size);  // Copia i caratteri nella memoria allocata
	text[size]='\0';		   // Aggiunge il terminatore di stringa
	
}

//Implementazione getter testo
void Rectangle::GetText(char* string) {
	
	memcpy(string,text,strlen(text)); // Copia contenuto in un buffer esterno
	
}





