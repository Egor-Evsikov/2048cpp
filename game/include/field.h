#ifndef FIELD_H
#define FIELD_H
#include <iostream>
#include <functional>



class Field {
    private:
        int size;
        int** field;
    public:
        void swipeUp ();
        void swipeDown();
        void swipeLeft();
        void swipeRight();

        void printField();
        void spawnNumber();
        void saveFile();
        Field();
        void game();
        //~Field();

};

#endif // FIELD_H
