#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

// IMPORTACION DE LAS DIFERENTES OPCIONES DE UN MENU
#include "Opcion1.cpp" 
#include "Opcion2.cpp"
#include "Opcion3.cpp"
#include "Opcion4.cpp" //Paula Segura.
#include "Opcion6.cpp" //Henry Gonzalez
#include "Opcion7.cpp"
#include "Opcion8.cpp" //Paula Segura.
#include "Opcion10.cpp" //Henry Gonzalez
#include "Opcion11.cpp"
#include "Opcion12.cpp" //Paula Segura.
#include "Opcion14.cpp" //Henry Gonzalez
#include "Opcion15.cpp"
#include "Opcion16.cpp" //Paula Segura.
#include "Opcion18.cpp" //Henry Gonzalez
#include "Opcion19.cpp" //Paula Segura.
#include "Opcion20.cpp" //Henry Gonzalez


using namespace std;
int main(void) {
	setlocale(LC_ALL, "");
    int opcion;
    bool repetir = true;

    do {
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. REGLA DE LA SUMA Y MULTIPLICACION" << endl;
        cout << "\n\t2. NUMERO PAR O IMPAR" << endl;
        cout << "\n\t3. CONVERTIR KILOMETROS A MILLAS, METROS A PULGADAS, DE LIBRAS A KILOS Y VICEVERSA" << endl;
        cout << "\n\t4. DETERMINAR SI UNA PALABRA O UN NÚMERO ES PALÍNDROMO" << endl;
        cout << "\n\t5. CONVERSION DE NUMEROS ARÁBIGOS A ROMANOS" << endl;
	    cout << "\n\t6. CONVERSION DE NUMEROS ENTEROS A LETRAS" << endl;
	    cout << "\n\t7. CONVERSION DE NUMEROS ENTEROS CON DECIMAL A LETRAS" << endl;
	    cout << "\n\t8. UNA TABLA DE MULTIPLICAR" << endl;
        cout << "\n\t9. TODAS LAS TABLAS DE MULTIPLICAR DEL 1 AL 10" << endl;
        cout << "\n\t10. CREAR DE FORMA GRAFICA LA MULTIPLICACION MANUAL 45x32" << endl;
        cout << "\n\t11. CONVERSION DE NUMEROS DECIMALES A BINARIO" << endl;
        cout << "\n\t12. CONVERSION DE NUMEROS DECIMALES A HEXADECIMALES" << endl;
        cout << "\n\t13. CREAR FIGURAS GEOMETRICAS BASICAS" << endl;
        cout << "\n\t14. MOVER UN PUNTO EN TODA LA PANTALLA" << endl;
        cout << "\n\t15. SIMULACION DE UN CAJERO (AUTOMATA)" << endl;
        cout << "\n\t16. CALCULAR LA HIPOTENUSA" << endl;
        /* programas opcionales */
        cout << "\n\t17. GENERAR NUMEROS ALEATORIOS Y LLENARLOS EN UNA MATRIZ" << endl;
        cout << "\n\t18. INGRESAR 3 PRODUCTOS CON SU PRECIO Y CALCULAR PROMEDIO DE LOS PRECIOS" << endl;
        cout << "\n\t19. DETERMINAR SI UNA PERSONA ES MAYOR O MENOR DE EDAD" << endl;
        cout << "\n\t20. CONTAR LAS VOCALES DE UNA FRASE" << endl;
        cout << "\n\t0. SALIR" << endl;

        cout << "\nSelecciona una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                Opcion1();
                break;
                
                
			case 2:
                Opcion2();
                break;
                
            case 3:
            	Opcion3();
            	break;
            case 4:
            	Opcion4();
            	break;
            case 5:
            	break;
            case 6:
            	Opcion6();
            	break;
            case 7:
            	Opcion7();
            	break;
            case 8:
            	Opcion8();
            	break;
            case 9:
            	break;
            case 10:
            	Opcion10();
                break;
            case 11:
            	Opcion11();
            	break;
            case 12:
            	Opcion12();
            	break;
            case 13:
            	break;
            case 14:
            	Opcion14();
            	break;
            case 15:
            	Opcion15();
            	break;
            case 16:
            	Opcion16();
            	break;
            case 17:
            	break;
            case 18:
            	Opcion18();
            	break;
            case 19:
            	Opcion19();
            	break;
            case 20:
            	Opcion20();
            	break;
            // no cambiar este case ya que es para salir del menu
             case 0:
            	repetir = false;
            	break;
            	
            	
        }
    } while (repetir);

    return 0;

    
    }
