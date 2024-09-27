#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <limits>
#include <cmath>
#include <time.h>
#include <random>
#include <windows.h>
#include <conio.h>
#include <functional>


class Field {
    private:
        int size;
        int** field;
    public:
        //void swipeDown(int, std :: function<void (int *)>);
        void swipeUpAndDown(int, std :: function<void (int *)>);
        void swipeLeft(int, std :: function<void (int *)>);
        void swipeRight(int, std :: function<void (int *)>);
        void printField();
        void spawnNumber();
        void saveFile();
        Field();
        void game();
        //~Field();

};
