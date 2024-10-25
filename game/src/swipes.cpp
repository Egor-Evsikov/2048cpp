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


void Field :: swipeUp() {
    int swipes{0};
    do {
        swipes = 0;
        for (int i = size - 1; i > 0; i --) {
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


void Field :: swipeDown () {
    int swipes{0};
    do {
        swipes = 0;
        for (int i = 0; i < size - 1; i ++) {
            for (int j = 0; j < size; j++) {
                if (field[i][j] == field[i + 1][j] && field[i][j] != 0) {
                    swipes ++;
                    field[i + 1][j] ++;
                    field[i][j] = 0;
                }
                else if (field[i][j] != 0 && field[i + 1][j] == 0) {
                    field[i + 1][j] = field[i][j];
                    field [i][j] = 0;
                    swipes++;
                }
            }
        }
    } while (swipes != 0);
}


void Field :: swipeRight() {
    int swipes{0};
    do {
        swipes = 0;
            for (int j = 0; j < size - 1; j ++) {
                for (int i = 0; i < size; i ++) {
                    if (field[i][j] != 0 && field[i][j + 1] == field[i][j]) {
                        field[i][j + 1]++;
                        field[i][j] = 0;
                        swipes ++;              
                    } else if (field[i][j + 1] == 0 && field[i][j] != 0) {
                        swipes ++;
                        field[i][j + 1] = field[i][j];
                        field[i][j] = 0;
                        swipes ++;
                    }
                }
            }
    } while(swipes != 0);
}


void Field :: swipeLeft() {
    int swipes{0};
    do {
        swipes = 0;
            for (int j = size - 1; j > 0; j --) {
                for (int i = 0; i < size; i ++) {
                    if (field[i][j] != 0 && field[i][j - 1] == field[i][j]) {
                        field[i][j - 1]++;
                        field[i][j] = 0;
                        swipes ++;              
                    } else if (field[i][j - 1] == 0 && field[i][j] != 0) {
                        swipes ++;
                        field[i][j - 1] = field[i][j];
                        field[i][j] = 0;
                        swipes ++;
                    }
                }
            }
    } while(swipes != 0);
}
