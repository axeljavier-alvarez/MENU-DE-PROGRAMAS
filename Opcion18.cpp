//NGRESAR 3 PRODUCTOS CON SU PRECIO Y CALCULAR PROMEDIO DE LOS PRECIOS
#include <iostream>
#include <iomanip>

using namespace std;

void Opcion18(){
	
	const int numProductos = 3;
    string productos[numProductos];
    double precios[numProductos];
    double sumaPrecios = 0;

    // Solicita pruducto y precios
    for (int i = 0; i < numProductos; ++i) {
        cout << "\nIngrese el nombre del producto " << i + 1 << ": ";
        cin >> productos[i];
        cout << "Ingrese el precio de " << productos[i] << ": Q";
        cin >> precios[i];
        sumaPrecios += precios[i];
    }

    // Calculo del promedio de los precios de los productos ingresados
    double promedio = sumaPrecios / numProductos;

    cout << "\nProductos ingresados y sus precios:\n";
    for (int i = 0; i < numProductos; ++i) {
        cout << productos[i] << ": Q " << fixed << setprecision(2) << precios[i] << endl;
    }
    cout << "\nEl promedio de los precios es: Q " << fixed << setprecision(2) << promedio << endl;
}
