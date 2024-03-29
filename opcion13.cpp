#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    
    cout << "Seleccione la figura geométrica que desea ver:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectángulo" << endl;
    cout << "3. Triángulo" << endl;
    cout << "4. Círculo" << endl;
    cout << "Ingrese el número correspondiente a la opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            int lado;
            cout << "Ingrese el tamaño del lado del cuadrado: ";
            cin >> lado;
            for (int i = 0; i < lado; ++i) {
                for (int j = 0; j < lado; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 2: {
            int ancho, alto;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            cout << "Ingrese la altura del rectángulo: ";
            cin >> alto;
            for (int i = 0; i < alto; ++i) {
                for (int j = 0; j < ancho; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 3: {
            int altura;
            cout << "Ingrese la altura del triángulo: ";
            cin >> altura;
            for (int i = 0; i < altura; ++i) {
                for (int j = 0; j <= i; ++j) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        }
        case 4: {
            int radio;
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            for (int i = -radio; i <= radio; ++i) {
                for (int j = -radio; j <= radio; ++j) {
                    if (sqrt(i * i + j * j) <= radio) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;
        }
        default:
            cout << "Opción inválida." << endl;
    }

    return 0;
}

