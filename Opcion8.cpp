// 8. Una tabla de multiplicar (Paula Segura).
#include <iostream>
using namespace std;

void Opcion8(){
	int num;
	
    do{
    	cout<<"Ingrese el NUMERO de la tabla de multiplicar, que usted desee visualizar: "<<endl;
        cin>>num;    	
	}while ((num<1) || (num>10));
	
	for (int i=1; i<13; i++){
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	
	
}
