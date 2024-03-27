// 12. Conversión de números decimales a hexadecimales. (Paula Segura).
#include <iostream>
#include <string> 
#include <sstream> 
using namespace std;

std:: string hexadecimal (int decimal){ //Funcion para caso 12.
	std::stringstream ss;
	ss<<std::hex<<decimal;
	return ss.str();
}

void Opcion12(){
	int num_decimal;
	
	cout<<"Ingrese un numero en decimal: "<<endl;
	cin>>num_decimal;
	
	string num_hexadecimal = hexadecimal(num_decimal);
	
	cout<<"El numero "<<num_decimal<<" en sistema hexadecimal es : "<<num_hexadecimal<<endl;
	
	
}
