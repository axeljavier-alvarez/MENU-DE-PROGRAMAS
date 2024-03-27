// 16. Calcular la Hipotenusa. (Paula Segura)
#include <iostream>
#include <math.h> 
using namespace std;

void Opcion16(){
	float opuesto, adyacente, suma, res;
	
	cout<<"Ingrese el valor del cateto opuesto: ";
	cin>>opuesto;
	cout<<"Ingrese el valor el cateto adyacente: ";
	cin>>adyacente;
	
	suma=(opuesto*opuesto)+(adyacente*adyacente);
	res=(sqrt(suma));
	
	cout<<"La hipotenusa es: "<<res<<endl;	
}
