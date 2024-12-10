#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits>
#include <cmath>
#include <time.h>
#include <random>
#include <windows.h>
#include "field.h"


Field :: Field() {
    std :: cout << "Enter field size:";
    std :: cin >> size;
    while (std::cin.fail()) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std :: cin >> size;
    }
    field = new int*[size];
    for (int i = 0; i < size; i ++) {
        field[i] = new int[size];
        for (int j = 0; j < size; j++) {
            field[i][j] = 0;
        }
    }
}
