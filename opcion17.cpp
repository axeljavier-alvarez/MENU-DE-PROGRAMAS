#include <iostream>
#include <cstdlib> // Incluir la librer�a para generar n�meros aleatorios
#include <ctime>   // Incluir la librer�a para obtener la semilla de tiempo

using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 3;
    int matriz[filas][columnas];

    // Inicializar la semilla de tiempo para obtener n�meros aleatorios diferentes en cada ejecuci�n
    srand(time(0));

    // Llenar la matriz con n�meros aleatorios
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 100; // Generar un n�mero aleatorio entre 0 y 99
        }
    }

    // Mostrar la matriz
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

