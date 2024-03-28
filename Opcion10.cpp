//CREAR DE FORMA GRAFICA LA MULTIPLICACION MANUAL
#include <iostream>
#include <iomanip>

using namespace std;

void Opcion10() {
    int num1, num2;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Proceso de la operacion num1 * num2
    int producto = num1 * num2;
    int productoParcial1 = num1 * (num2 % 10);
    int productoParcial2 = num1 * (num2 / 10) * 10;

    // Presentacion grafica de la operacion num1 * num2
    cout << setw(10) << num1 << endl;
    cout << "x" << setw(9) << num2 << endl;
    cout << setw(11) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(10) << productoParcial1 << endl;
    cout << setw(10) << productoParcial2 << endl;
    cout << setw(11) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(10) << producto << endl;


}
