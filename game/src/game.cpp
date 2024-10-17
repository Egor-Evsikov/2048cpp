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

// w - 119 W - 87
// a - 97 A - 65
// s - 115 S - 83
// d - 100 D - 68

void Field :: game() {
    while (true) {
        int key = _getch(); 
        if (key == 0 || key == 224) {
            switch (_getch()) {
                case 72 : // Вверх
                    //swipeUp();
                    break;
                case 80: // Вниз
                    //swipeDown();
                    break;
                case 75: // Влево
                    //swipeLeft();
                    break;
                case 77: // Вправо
                    //swipeRight();
                    break;
            }
        } else if (key == 27) { // ESC
            //saveFile();
            break;
        } else {
            switch (key)
            {
                case 119:
                    case 87:
                    //swipeUp();
                    break;
                case 97 :
                    case 65:
                    //swipeLeft();
                    break;
                case 115: 
                    case 83: 
                    ///swipeDown();
                    break;
                case 100:
                    case 68:
                    //swipeLeft();
                    break;
            }
        }
    }
}