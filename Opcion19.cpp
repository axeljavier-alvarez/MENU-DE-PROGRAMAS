// 19. Determinar si una persona es mayor o menor de edad. (Paula Segura).}
#include <iostream>
using namespace std;

void Opcion19(){
	int edad;
	
	cout<<"Ingrese la edad: ";
	cin>>edad;
	
	if(edad>=18){
		cout<<"La persona es mayor de edad."<<endl;
	}else{
		cout<<"La persona es menor de edad."<<endl;
	}
}
