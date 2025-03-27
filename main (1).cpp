#include<iostream> 
#include<cstring>

using namespace std;



#include "CRectangle.h"
/*
void ProcessRectangle(Rectangle* r) {
	
	char msg1[1000];
	int size = strlen("scherzone");
	memcpy(msg1,"scherzone",size); 
	msg1[size]='\0';
	
	cout << endl;
	cout << "######## Process ###########" << endl;
	
	float w = r->GetWidth(); 
	float h = r->GetHeight();	
		
	r->SetWidth(h); 
	r->SetHeight(w);
	

	r->SetText(msg1);
	
	
	r->Dump(); 
	cout << "######### ######### ##########" << endl;
	
}
*/


void ProcessRectangle(Rectangle r) {
	
	char msg1[1000];
	int size = strlen("scherzone");
	memcpy(msg1,"scherzone",size); 
	msg1[size]='\0';
	
	cout << endl;
	cout << "######## Process ###########" << endl;
	
	float w = r.GetWidth(); 
	float h = r.GetHeight();	
		
	r.SetWidth(h); 
	r.SetHeight(w);
	

	r.SetText(msg1);
	
	
	r.Dump(); 
	cout << "######### ######### ##########" << endl;
}



int main() {

	Rectangle rectA(10,5);
	
	
	char msg1[1000];
	int size = strlen("prova");
	memcpy(msg1,"prova",size); 
	msg1[size]='\0';

	rectA.SetText(msg1);
	//Se non avessi il costruttore di copia verrebbero copiati anche gli indirizzi di memoria e non va bene in caso di deallocazione o se cambio valore in memoria
	Rectangle rectB=rectA;
	
	
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump(); 
	cout << "****** ********* ******" << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump(); 
	cout << "****** ********* ******" << endl;
	
	

	/*
	Viene chiamata la funzione passandogli rectA 
	E' giusto che venga chiamato il costruttore di copia, perchè si crea una copia locale -->
	*/
	ProcessRectangle(rectA); 

	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;
	
	return 0;

}