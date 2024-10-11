#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits>
#include <cmath>
#include <time.h>
#include <random>
#include <windows.h>
#include <conio.h>
#include "../include/field.h"

void inc(int *i) {i++;}
void dec(int *i) {i--;}


void Field :: swipeUpAndDown(int start, std :: function<void(int *)> krement) {
    int swipes{0};
    do {
        swipes = 0;
        for (int i = start; i > 0 ; krement(&i)) {
            for (int j = 0; j < size; j++) {
                if (field[i][j] == field[i - 1][j] && field[i][j] != 0) {
                    swipes ++;
                    field[i - 1][j] ++;
                    field[i][j] = 0;
                }
                else if (field[i][j] != 0 && field[i - 1][j] == 0) {
                    field[i - 1][j] = field[i][j];
                    field [i][j] = 0;
                    swipes++;
                }
            }
        }
    } while (swipes != 0);
}

