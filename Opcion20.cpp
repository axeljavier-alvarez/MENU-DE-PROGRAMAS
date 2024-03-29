//CONTAR LAS VOCALES DE UNA FRASE
#include <iostream>

using namespace std;

void Opcion20() {
    string frase;
    int contadorVocales = 0;

    // Solicita igresar una frase
    cout << "Ingrese una frase: ";
    cin.ignore(); // Ignorar el salto de linea anterior
    getline(cin, frase); // lee la frase

    // Cuenta las vocales
    for (char caracter : frase) {
        caracter = tolower(caracter);
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contadorVocales++;
        }
    }

    cout << "La cantidad de vocales en la frase es: " << contadorVocales << endl;
}
