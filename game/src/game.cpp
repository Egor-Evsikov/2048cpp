#include <iostream>
#include <conio.h> 
#include <windows.h>
#include "field.h"

void Field :: game() {
    bool running = true;

    while (running) {
        if (_kbhit()) {
            int ch = _getch();  
            
            if (ch == 0 || ch == 224) {
                ch = _getch();  
                switch (ch) {
                    case 72:
                        swipeUp();
                        printField();
                        break;
                    case 80:
                        swipeDown();
                        printField();
                        break;
                    case 75:
                        swipeLeft();
                        printField();
                        break;
                    case 77:
                        swipeRight();
                        printField();
                        break;
                }
            } else {
                switch (ch) {
                    case 'w':
                    case 'W':
                        swipeUp();
                        printField();
                        break;
                    case 'a':
                    case 'A':
                        swipeLeft();
                        printField();
                        break;
                    case 's':
                    case 'S':
                        swipeDown();
                        printField();
                        break;
                    case 'd':
                    case 'D':
                        swipeRight();
                        printField();
                        break;
                    case 27:  
                        std :: cout << "Завершение игры. Выход из программы\n";
                        exit(0);
                        break;
                }
            }
        }
        
        Sleep(50); 
    }
}

void Field :: winGame() {
    for (int i = 0 ; i < size; i ++) {
        for (int j = 0; j < size; j ++) {
            if (field[i][j] == 11) {
                std :: cout << "YOU WIN!";
                std :: cin;
                exit(0);
            }
        }
    }

} 