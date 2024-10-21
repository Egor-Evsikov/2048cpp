//         if (key == 0 || key == 224) {
#include "field.h"
#include <iostream>
#include <time.h>
// void setColor(int textColor) {
//     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//     SetConsoleTextAttribute(hConsole, textColor);
// }

// void inc(int *i) {i++;}
// void dec(int *i) {i--;}






// void Field :: swipeUpAndDown(int start, std :: function<void(int *)> krement) {
//     int swipes{0};
//     do {
//         swipes = 0;
//         for (int i = start; i > 0 ; krement(&i)) {
//             for (int j = 0; j < size; j++) {
//                 if (field[i][j] == field[i - 1][j] && field[i][j] != 0) {
//                     swipes ++;
//                     field[i - 1][j] ++;
//                     field[i][j] = 0;
//                 }
//                 else if (field[i][j] != 0 && field[i - 1][j] == 0) {
//                     field[i - 1][j] = field[i][j];
//                     field [i][j] = 0;
//                     swipes++;
//                 }
//             }
//         }
//     } while (swipes != 0);
// }

//w - 119 W - 87
//a - 97 A - 65
//s - 115 S - 83
//d - 100 D - 68

// void Field :: game() {
//     while (true) {
//         int key = _getch(); 
    
//             switch (_getch()) {
//                 case 72 : // Вверх
//                     swipeUp();
//                     break;
//                 case 80: // Вниз
//                     swipeDown();
//                     break;
//                 case 75: // Влево
//                     swipeLeft();
//                     break;
//                 case 77: // Вправо
//                     swipeRight();
//                     break;
//             }
//         } else if (key == 27) { // ESC
//             saveFile();
//             break;
//         } else {
//             switch (key)
//             {
//             case 119:
//             case 87:
//                 swipeUp();
//                 break;
//             case 97 :
//             case 65:
//                 swipeLeft();
//                 break;
//             case 115: 
//             case 83: 
//                 swipeDown();
//                 break;
//             case 100:
//             case 68:
//                 swipeLeft();
//                 break;
//             }
//         }
//     }
// }



// Field :: Field() {
//     std :: cout << "Enter field size:";
//     std :: cin >> size;
//     while (std::cin.fail()) {
//         std::cin.clear(); 
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
//         std :: cin >> size;
//     }
//     field = new int*[size];
//     for (int i = 0; i < size; i ++) {
//         field[i] = new int[size];
//         for (int j = 0; j < size; j++) {
//             field[i][j] = 0;
//         }
//     }

// }

// void Field :: spawnNumber() {
//     std::random_device rd;
//     std::mt19937 gen(rd());
//     std::uniform_int_distribution<> random(1, 4);
//     int choice = random(gen);
//     int i1, i2;
//     while (choice <= 2) {
//         std::uniform_int_distribution<> sizerand(0, size - 1);    
//          i1 = sizerand(gen);
//          i2 = sizerand(gen);
//          if (field[i1][i2] == 0) {
//             field[i1][i2] = choice;
//             break;
//          }
//     } 
// }

// void Field :: printField() {
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             std :: cout << "    ";
//         }
//         std :: cout << std :: endl;
//         for (int j = 0; j < size; j ++) {
//             if (field[i][j] == 0) {
//                 //setColor(field[i][j] + 3);
//                 std :: cout << "  0  ";
//             }  else
//                 //setColor(field[i][j] + 3);
//                 std :: cout << "  " <<pow(2, field[i][j]) << "  ";
//         } 
//         std :: cout << std :: endl;
//     } 
// }


int main() {
    std :: cout << "Welcome to 2048!" << std :: endl << "Enter any key to start playing ";
    getchar();
    Field newField;
    for (int i = 0; i < 15; i ++ ) newField.spawnNumber();
    newField.printField();
    newField.swipeUp();
    std :: cout << std :: endl;
    newField.printField();
    std :: cout << std :: endl;




}