/*! \file CRhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H


/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus 
{
private:
	float diagL;
	float diagS;
	

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rhombus(); //costr. di deafault
	Rhombus(float dL, float dS); // costr. con i 2 parametri
	Rhombus(const Rhombus &r); //costr. di copia
	
	~Rhombus();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Rhombus& operator=(const Rhombus &r); 
	bool operator==(const Rhombus &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rhombus &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetDiagL(float d);
	void SetDiagS(float d);
	void SetDim(float dL, float dS); 
		
	void GetDim(float &dL, float &dS);
	float GetDiagL();
	float GetDiagS(); 
	float GetPerimeter(); 
	float GetArea();
	float GetSide(); //"dammi il tuo lato senza passare dalle diagonali"
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif