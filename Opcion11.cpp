// PROYECTO GRUPAL 2
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h> // Para caso 16.
#include <string> // Para caso 4 y 12.
#include <algorithm> //Para caso 4. 
#include <sstream> // Para caso 12.
#include <vector>

using namespace std;

void Opcion11() {
	int decimal;
  cout << "Ingrese un número decimal: ";
  cin >> decimal;

  // Conversión a binario usando el método de división sucesiva
  int binario[10], i = 0;
  while (decimal > 0) {
    binario[i++] = decimal % 2;
    decimal /= 2;
  }

  // Imprimir el número binario
  cout << "El número binario es: ";
  for (int j = i - 1; j >= 0; j--) {
    cout << binario[j];
  }
  cout << endl;
	
}
