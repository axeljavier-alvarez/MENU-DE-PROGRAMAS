#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    
    cout << "Seleccione la figura geom�trica que desea ver:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rect�ngulo" << endl;
    cout << "3. Tri�ngulo" << endl;
    cout << "4. C�rculo" << endl;
    cout << "Ingrese el n�mero correspondiente a la opci�n: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            int lado;
            cout << "Ingrese el tama�o del lado del cuadrado: ";
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
            cout << "Ingrese el ancho del rect�ngulo: ";
            cin >> ancho;
            cout << "Ingrese la altura del rect�ngulo: ";
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
            cout << "Ingrese la altura del tri�ngulo: ";
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
            cout << "Ingrese el radio del c�rculo: ";
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
            cout << "Opci�n inv�lida." << endl;
    }

    return 0;
}

