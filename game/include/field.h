#ifndef FIELD_H
#define FIELD_H
#include <functional>

void dec(int *i); 
void inc(int *i);

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

#endif // FIELD_H
