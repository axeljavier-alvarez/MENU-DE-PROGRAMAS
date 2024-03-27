#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

void Opcion11() {
	int numero, remainder;
    string valorBinario = "";

    cout << "Ingrese un numero decimal: ";
    cin >> numero;
    
    // Verificacion para numeros negativos
    if (numero < 0) {
     cout << "No se pueden convertir numeros negativos " << endl;
    }
    
    // Recorrido de numero
  while (numero != 0) {
    remainder = numero % 2;
    valorBinario = to_string(remainder) + valorBinario;
    numero /= 2;
  }

  cout << "Su valor binario es: " << valorBinario << endl;
	
}
