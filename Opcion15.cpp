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

void Opcion15() {
	int opcion;
  float saldo = 100.0f; // Con un saldo inicial
  vector<float> transacciones; // Transacciones realizadas
  
  // Bucle para repetir el menu del cajero
  while (true) {
    // Mostrar menú
    cout << endl;
    cout << "**Bienvenido al cajero automático**" << endl;
    cout << "**Seleccione una opción:**" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retiro de efectivo" << endl;
    cout << "3. Deposito de efectivo" << endl;
    cout << "4. Salir" << endl;
    cout << ">> ";
    cin >> opcion;

    // Procesar la opción seleccionada
    switch (opcion) {
      case 1:
        // Consultar saldo
        cout << "Su saldo actual es: $" << saldo << endl;
        break;
      case 2:
        // Retiro de dinero
        float monto_retiro;
        cout << "Ingrese el monto a retirar: $";
        cin >> monto_retiro;
        if (monto_retiro > saldo) {
          cout << "No puede realizar el retiro por su saldo insuficiente." << endl;
        } else {
          saldo -= monto_retiro;
          transacciones.push_back(-monto_retiro);
          cout << "El retiro fue realizado con exito" << endl;
          cout << "Nuevo saldo: $" << saldo << endl;
        }
        break;
      case 3:
        // Si quiere depositar dinero xd
        float monto_deposito;
        cout << "Ingrese el monto a depositar: $";
        cin >> monto_deposito;
        saldo += monto_deposito;
        transacciones.push_back(monto_deposito);
        cout << "Deposito realizado con éxito." << endl;
        cout << "Nuevo saldo es: $" << saldo << endl;
        break;
      case 4:
        // Salir del cajero
        exit(EXIT_SUCCESS);
        cout << "Gracias por utilizar nuestros servicios " << endl;
        break;
      default:
        // En caso de error
        cout << "No se puede realizar la accion, intentar de nuevo " << endl;
        break;
    }
  }
}
