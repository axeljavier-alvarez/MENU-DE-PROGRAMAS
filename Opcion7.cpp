#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

string convertir_entero(int numero) {
	
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  if (numero < 10) {
    return unidades[numero];
  } else if (numero < 100) {
    string resultado = decenas[numero / 10];
    if (numero % 10 > 0) {
      resultado += " y " + unidades[numero % 10];
    }
    return resultado;
  } else if (numero < 1000) {
    string resultado = centenas[numero / 100];
    if (numero % 100 > 0) {
      resultado += " " + convertir_entero(numero % 100);
    }
    return resultado;
  } else {
    return "Número demasiado grande";
  }
}

string convertir_decimal(int numero) {
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  string resultado = "";
  for (int i = 0; i < 2; i++) {
    int digito = numero % 10;
    resultado = unidades[digito] + resultado;
    if (i == 0) {
      resultado = " coma " + resultado;
    }
    numero /= 10;
  }
  return resultado;
}

string convertir_numero(double numero) {
	string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  int parte_entera = (int)numero;
  int parte_decimal = (int)((numero - parte_entera) * 100);
  string resultado = convertir_entero(parte_entera);
  if (parte_decimal > 0) {
    resultado += " con " + convertir_decimal(parte_decimal);
  }
  return resultado;
}

void Opcion7(){
	
  double numero;
  cout << "Ingrese un numero con decimales: ";
  cin >> numero;
  cout << "El numero en letras es: " << convertir_numero(numero) << endl;

  

}

