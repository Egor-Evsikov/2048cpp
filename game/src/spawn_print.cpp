#include <iostream>
#include <cmath>
#include <random>
#include "field.h"
#include <cstdlib>
#include <chrono>
#include <iomanip>


// void setColor(int textColor) {
//     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//     SetConsoleTextAttribute(hConsole, textColor);
// }

void Field :: spawnNumber() {

    auto now = std::chrono::steady_clock::now();
    auto milliseconds_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
    std::mt19937 generator(static_cast<unsigned int>(milliseconds_since_epoch));
    std::uniform_int_distribution<int> distr(1, 4);
    std::uniform_int_distribution<int> sizerand(0, size - 1);


    int choice = distr(generator);
    int i1, i2;

    while (choice <= 2) {
        i1 = sizerand(generator);
        i2 = sizerand(generator);
        if (field[i1][i2] == 0) {
            field[i1][i2] = choice;
            break;
        }
    } 
}

void Field :: printField() {
    system("cls");

    std::cout << "┌";
    for (int i = 0; i < size; ++i) {
        std::cout << "───";
        if (i < size - 1)
            std::cout << "┬";
    }
    std::cout << "┐\n";

    for (int i = 0; i < size; ++i) {
        std::cout << "│";
        for (int j = 0; j < size; ++j) {
            if (field[i][j] != 0) 
                std::cout << std::setw(2) << pow (2, field[i][j]) << " │";
            else 
                std :: cout << std::setw(2) << 0 << " │";
        }

        std::cout << "\n";
        if (i < size - 1) {
            std::cout << "├";
            for (int j = 0; j < size; ++j) {
                std::cout << "───";
                if (j < size - 1)
                    std::cout << "┼";
            }
            std::cout << "┤\n";
        }
    }

    std::cout << "└";
    for (int i = 0; i < size; ++i) {
        std::cout << "───";
        if (i < size - 1)
            std::cout << "┴";
    }
    std::cout << "┘\n";

    winGame();
    spawnNumber();
}