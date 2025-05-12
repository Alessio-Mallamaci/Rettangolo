/*! \file CRectangle.h
    \brief Declaration of the class Rectangle

    Contiene la dichiarazione della classe Rectangle, che rappresenta un oggetto con forma rettangolare, 
    comprensivo di metodi per impostarne dimensioni, confrontare, visualizzare ed eseguire debug.
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

/// @class Rectangle
/// @brief Classe che gestisce un oggetto con forma rettangolare
class Rectangle 
{
private: // Variabili accessibili solo internamente alla classe

    float height; // Altezza del rettangolo
    float width;  // Larghezza del rettangolo
    char* text;   // Puntatore a una stringa, usato come etichetta o descrizione

public: // Interfaccia pubblica della classe

    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    Rectangle();                      // Costruttore di default: crea un rettangolo con valori iniziali nulli
    Rectangle(float w, float l);      // Costruttore parametrico: inizializza con larghezza e altezza specificate
    Rectangle(const Rectangle &r);    // Costruttore di copia: inizializza copiando un altro oggetto Rectangle
    ~Rectangle();                     // Distruttore: libera la memoria dinamica associata al testo
    /// @}

    /// @name OPERATORS
    /// @{
    Rectangle& operator=(const Rectangle &r); // Operatore di assegnazione: copia i valori da un altro oggetto
    bool operator==(const Rectangle &r);      // Operatore di confronto: restituisce true se larghezza e altezza coincidono
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();                         // Inizializza il rettangolo con valori predefiniti (inizializzazione standard)
    void Init(const Rectangle &r);       // Inizializza copiando dimensioni e testo da un altro oggetto (Inizializzazione da copia)
    void Reset();                        // Reimposta l’oggetto: azzera dimensioni e rilascia memoria
    /// @}

    /// @name GETTERS / SETTERS
    /// @{
	void SetHeight(float h);            // Imposta l’altezza
    void SetWidth(float w);             // Imposta la larghezza
    void SetDim(float w, float h);      // Imposta larghezza e altezza contemporaneamente
    void SetText(const char* string);   // Imposta il testo associato al rettangolo (alloca memoria e copia)

    void GetDim(float &w, float &h);    // Restituisce larghezza e altezza tramite parametri passati per riferimento
    float GetHeight();                  // Restituisce l’altezza corrente
    float GetWidth();                   // Restituisce la larghezza corrente
    float GetPerimeter();               // Calcola e restituisce il perimetro
    float GetArea();                    // Calcola e restituisce l’area
    void GetText(char* string);         // Copia il testo memorizzato all’esterno
    /// @}

    /// @name DEBUG and SERIALIZATION 
    /// @{
    void ErrorMessage(const char *string);    // Stampa un messaggio di errore
    void WarningMessage(const char *string);  // Stampa un messaggio di avviso (per i warning)
    void Dump();                              // Stampa tutti i dati dell’oggetto (utile per il debug)
    /// @}
};

#endif // RECTANGLE_H
