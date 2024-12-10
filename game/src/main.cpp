//         if (key == 0 || key == 224) {
#include "field.h"
#include <iostream>
#include <windows.h>
#include <cstdlib>



int main() {
    SetConsoleOutputCP(CP_UTF8);
    std :: cout << "Начало игры!" << std :: endl << "Нажмите любую клавишу, чтобы начать игру";
    getchar();
    Field gameField;
    for (int i = 0; i < 15; i++) {
        Sleep(52);
        gameField.spawnNumber();
    }
    gameField.printField();

    gameField.game();





}