#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

void Opcion2() {
		int num, resul;      
    cout<<"ingrese el numero: ";
    cin>>num;

    if(num%2==0){
        resul=1;
        cout<<"El numero ingresado es Par ";
        } else{
            resul=-1;
            cout<<"El numero ingresado es ipar";
        }
}



