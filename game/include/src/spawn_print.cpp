#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits>
#include <cmath>
#include <time.h>
#include <random>
#include <windows.h>
#include <conio.h>
#include "field.h"


void setColor(int textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor);
}

void Field :: spawnNumber() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> random(1, 4);
    int choice = random(gen);
    int i1, i2;
    while (choice <= 2) {
        std::uniform_int_distribution<> sizerand(0, size - 1);    
         i1 = sizerand(gen);
         i2 = sizerand(gen);
         if (field[i1][i2] == 0) {
            field[i1][i2] = choice;
            break;
         }
    } 
}

void Field :: printField() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std :: cout << "    ";
        }
        std :: cout << std :: endl;
        for (int j = 0; j < size; j ++) {
            if (field[i][j] == 0) {
                //setColor(field[i][j] + 3);
                std :: cout << "  0  ";
            }  else
                //setColor(field[i][j] + 3);
                std :: cout << "  " <<pow(2, field[i][j]) << "  ";
        } 
        std :: cout << std :: endl;
    } 
}