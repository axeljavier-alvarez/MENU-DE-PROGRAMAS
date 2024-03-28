//MOVER UN PUNTO EN TODA LA PANTALLA
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Opcion14() {
    const int consoleWidth = 80;
    const int consoleHeight = 24;

    int x = consoleWidth / 2;
    int y = consoleHeight / 2;

    int dx = 1;
    int dy = 1;

    bool pausa = false;
    
    while (true) {
        system("cls");

        gotoxy(x, y);
        cout << '*';

        gotoxy(0, 0);
        cout << "Presiona 'p' para detener el punto y salir del programa.";

        if (_kbhit()) {
            char key = _getch();
            if (key == 'q')
                break;
            else if (key == 'p') {
                pausa = !pausa;
                if (pausa) {
                    while (_kbhit())
                        _getch();
                    break;
                }
            }
        }

        if (pausa) {
            Sleep(100);
            continue;
        }

        x += dx;
        y += dy;

        if (x <= 0 || x >= consoleWidth - 1)
            dx = -dx;
        if (y <= 0 || y >= consoleHeight - 1)
            dy = -dy;

        Sleep(100);
        
    }
}

