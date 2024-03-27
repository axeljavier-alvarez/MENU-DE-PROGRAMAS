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

void Opcion3() {
	float kilometros, millas;
    float metros, pulgadas;
    float libras, kilos;
    
    // Convirtiendo Kilometros a millas
  cout << "CONVIRTIENDO KILOMETROS A MILLAS: \n";
  cout << "Ingrese la cantidad de kilometros: ";
  cin >> kilometros;
  millas = kilometros * 0.621371;
  cout << kilometros << " kilometros equivalen a " << millas << " millas." << endl;
  
   // Convertir millas a kilómetros
  cout << "CONVIRTIENDO MILLAS A KILOMETROS: \n";
  cout << "Ingrese la cantidad de millas: ";
  cin >> millas;
  kilometros = millas * 1.60934;
  cout << millas << " millas equivalen a " << kilometros << " kilometros." << endl;
  
  // Convertir metros a pulgadas 
  cout << "CONVIRTIENDO METROS A PULGADAS: \n";
  cout << "Ingrese la cantidad de metros: ";
  cin >> metros;
  pulgadas = metros * 39.3701;
  cout << metros << " metros equivalen a " << pulgadas << " pulgadas." << endl;
  
  
  // Convertir pulgadas a metros
  cout << "CONVIRTIENDO PULGADAS A METROS: \n";
  cout << "Ingrese la cantidad de pulgadas: ";
  cin >> pulgadas;
  metros = pulgadas * 0.0254;
  cout << pulgadas << " pulgadas equivalen a " << metros << " metros." << endl;

  // Convertir libras a kilos
  cout << "CONVIRTIENDO LIBRAS A KILOS: \n";
  cout << "Ingrese la cantidad de libras: ";
  cin >> libras;
  kilos = libras * 0.453592;
  cout << libras << " libras equivalen a " << kilos << " kilos." << endl;
  
  // Convertir kilos a libras
  cout << "CONVIRTIENDO KILOS A LIBRAS: \n";
  cout << "Ingrese la cantidad de kilos: ";
  cin >> kilos;
  libras = kilos * 2.20462;
  cout << kilos << " kilos equivalen a " << libras << " libras." << endl;
	
}

