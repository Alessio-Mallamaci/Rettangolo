/*! \file CRectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H


/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle 
{
private: //non accessibile all'esterno, ma solo le funzioni membro di questa classe
	float height; //altezza
	float width; //larghezza
	

public:
	
	
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rectangle(); //costruttore di default
	Rectangle(float w, float l); //costruttore (sfrutto concetto di overload --> diversificano il tipo di parametri e il numero di parametri)
	Rectangle(const Rectangle &r); 
	/* costruttore di copia (per evitare quello di default del compilatore e,
	 in particolare, la copia shallow, ovvero copia bit a bit --> evitando problemi 
	 con la RAM e in particolari con i puntatori, modificatore del valore della 
	 cella di RAM e deallocazione della memoria
	*/
	
	~Rectangle(); //decostruttore
	/// @}
	
	//METODO PER INIZIALIZZARE E CANCELLARE IN MANIERA UNIVOCA UN OGGETTO (NON OBBLIGATORIA):
	//------------------------------------------------


	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rectangle &r);							
	void Reset();												
	/// @}
	//------------------------------------------------
	

	//IDEA DI INCAPSULAMENTO:
	//------------------------------------------------


	/// @name GETTERS / SETTERS
	/// @{
	//permette di modificare variabili private
	void SetHeight(float h);
	void SetWidth(float w);
	void SetDim(float w, float h); 
	/*motivo concettuale per cui creo queste funzioni (pubbliche) è per avere l'accesso 
	alle variabili private --> sono dunque funzioni d'interfaccia.
	Non mettiamo le variabili pubbliche per evitare un controllo sugli input, controllando che il valore 
	inserito dall'utente sia verificato, oppure ci sono variabili private che non vogliamo far modificare*/
	
	//permette di leggere variabili private
	void GetDim(float &w, float &h);
	float GetHeight();
	float GetWidth(); 
	
	
	float GetPerimeter(); 
	float GetArea();
	
	//------------------------------------------

	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); //funzione che mi scrive gli error message
	void WarningMessage(const char *string); //funzione che mi scrive i warning message
	void Dump();
	/// @}
		
};

#endif