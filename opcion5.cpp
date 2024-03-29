#include <iostream>
#include <string>

using namespace std;

// Función para convertir números arábigos a romanos
string arabigo_a_romano(int num) {
    string romano = "";
    
    // Definir los símbolos romanos y sus valores correspondientes
    string simbolos_romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int valores_romanos[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    // Iterar sobre los valores romanos y construir la cadena romana
    for (int i = 0; i < 13; ++i) {
        while (num >= valores_romanos[i]) {
            romano += simbolos_romanos[i];
            num -= valores_romanos[i];
        }
    }
    
    return romano;
}

int main() {
    int numero;
    cout << "Ingrese un número arábigo (entre 1 y 3999): ";
    cin >> numero;

    // Validar que el número esté en el rango permitido
    if (numero < 1 || numero > 3999) {
        cout << "Número fuera de rango." << endl;
        return 1;
    }

    // Obtener el equivalente romano y mostrarlo
    string romano = arabigo_a_romano(numero);
    cout << "El número " << numero << " en números romanos es: " << romano << endl;

    return 0;
}

