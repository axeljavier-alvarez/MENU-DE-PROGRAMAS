#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese el n�mero de la tabla de multiplicar que desea ver (1 al 10): ";
    cin >> numero;

    // Validar la entrada del usuario
    if (numero < 1 || numero > 10) {
        cout << "N�mero fuera de rango." << endl;
        return 1;
    }

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    
    // Imprimir la tabla de multiplicar del n�mero ingresado
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    
    return 0;
}

