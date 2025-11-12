#ifndef UNTITLED1_ENCLOSURE_H
#define UNTITLED1_ENCLOSURE_H
#include "Animal.h"

class ENCLOSURE
{
    private:
    Animal *animals;
    int capacity;
    int currentCount;
    public:
    ENCLOSURE(int cap);
    void addAnimal(Animal *animal);
    void display();
    ~ENCLOSURE();
};
#endif
