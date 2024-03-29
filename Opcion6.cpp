//CONVERSION DE NUMEROS ENTEROS A LETRAS
#include <iostream>

using namespace std;

// Definimos 4 arreglos unidades, decenas, centenas y especiales
string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

// Funcion para convertir un numero en letras
string convertir(int numero) {
    if (numero == 1000)
        return "mil";
    else if (numero >= 100) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0)
            return centenas[centena];
        else
            return centenas[centena] + " " + convertir(resto);
    }
    else if (numero >= 20) {
        int decena = numero / 10;
        int resto = numero % 10;
        if (resto == 0)
            return decenas[decena];
        else
            return decenas[decena] + " y " + convertir(resto);
    }
    else if (numero >= 10) {
        return especiales[numero - 10];
    }
    else {
        return unidades[numero];
    }
}

// Implementación de la función Opcion6
void Opcion6() {
    int numero;
    cout << "Ingrese un numero del 1 al 1000: ";
    cin >> numero;
    if (numero >= 1 && numero <= 1000) {
        cout << "El numero " << numero << " en letras es: " << convertir(numero) << endl;
    } else {
        cout << "El numero ingresado está fuera del rango permitido." << endl;
    }
}
