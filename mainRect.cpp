#include <iostream>     // Libreria standard per input/output (es. cout)
#include <cstring>      // Libreria per funzioni sulle stringhe C-style (es. memcpy, strlen)

#include "CRectangle.h"  // Include la definizione della classe Rectangle

using namespace std;

int main() {

	
	Rectangle rectA(10,5);   // Crea oggetto rettangolo A con larghezza 10 e altezza 5
	Rectangle rectB(3,7);    // Crea oggetto rettangolo B con larghezza 3 e altezza 7
	Rectangle rectC;         // Crea rettangolo C usando il costruttore di default (dimensioni 0)

	
	char msg1[1000];                    // Buffer per il testo da assegnare a rectA
	int size = strlen("prova A");       // Calcola la lunghezza della stringa "prova A"
	memcpy(msg1,"prova A",size);        // Copia "prova A" nel buffer msg1
	msg1[size]='\0';                    // Aggiunge il terminatore di stringa manualmente


	char msg2[1000];                    // Buffer per il testo da assegnare a rectB
	size = strlen("prova B");           // Calcola lunghezza di "prova B"
	memcpy(msg2,"prova B",size);        // Copia la stringa nel buffer msg2
	msg2[size]='\0';                    // Aggiunge il terminatore

	
	rectA.SetText(msg1);                // Imposta il testo di rectA a "prova A"
	rectB.SetText(msg2);                // Imposta il testo di rectB a "prova B"

	
	cout << endl;
	cout << "rectangle A" << endl;
	rectA.Dump();                      // Stampa tutte le informazioni di rectA (width, height, text)


	cout << endl;	
	cout << "rectangle B" << endl;
	rectB.Dump();                      // Stampa tutte le informazioni di rectA (width, height, text)


	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();                      // Stampa info di rectC (anche se è stato inizializzato a 0 e senza testo)

			
	rectC = rectA; // Usa operator= per copiare tutte le info da rectA a rectC (dimensioni + testo)
	

	cout << endl;	
	cout << "rectangle C" << endl;
	rectC.Dump();                      // Stampa nuovo stato di rectC (ora che è la copia di rectA)

	
	if (rectA == rectC)                // Verifica se A e C hanno stesse dimensioni (NB: il testo NON viene confrontato)
		cout<< "A e C sono uguali" << endl;
	else 
		cout<< "A e C sono diversi" << endl;

	
	return 0; //Fine del programma
}