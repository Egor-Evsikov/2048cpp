#include <iostream>
#include <cmath>
#include <random>
#include <windows.h>
#include "field.h"
#include <ctime>
#include <cstdlib>

void setColor(int textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor);
}

void Field :: spawnNumber() {
    std :: srand(static_cast<unsigned int>(std::time(0)) ) ;

    // std::random_device rd;
    // std::mt19937 gen(rd());
    // std::uniform_int_distribution<> random(0, 4);
    int choice = rand() % 4 + 1;
    std :: cout << choice << std :: endl << std :: endl;
    int i1, i2;
    while (choice <= 2) {
        //std::uniform_int_distribution<> sizerand(0, size - 1);    
        i1 = rand() % size;
        i2 = rand() % size;
        if (field[i1][i2] == 0) {
            field[i1][i2] = choice;
            break;
        }
    } 
}
// ──────
void Field :: printField() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std :: cout << "    ";
        }
        std :: cout << std :: endl;
        for (int j = 0; j < size; j ++) {
            if (field[i][j] == 0) {
                std :: cout << "  0  ";
            }  else
                std :: cout << "  " <<pow(2, field[i][j]) << "  ";
        } 
        std :: cout << std :: endl;
    } 
}