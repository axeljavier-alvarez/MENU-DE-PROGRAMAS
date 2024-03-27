// 4. Determinar si una palabra o un número es palíndromo. (Paula Segura)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool espalindromo (const std::string & str) { //Función.
        std::string strCopy= str;
        std::transform(strCopy.begin(), strCopy.end(), strCopy.begin(), ::tolower);
        return strCopy ==
        std::string (strCopy.rbegin(), strCopy.rend());
	}  
	
void Opcion4(){ 
	   	string entrada;
	   	
	   	cout<<"Ingrese una palabra o un numero para verificar si es un palindromo: "<<endl;
	   	cin>>entrada;
	   	
	   	if (espalindromo(entrada)){
	   		cout<<"Es un palindromo"<<endl;
		   } else { cout<<"No es un palindromo."<<endl;
		   }
	   }

	
