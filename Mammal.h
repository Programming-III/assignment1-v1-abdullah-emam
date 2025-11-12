#ifndef UNTITLED1_MAMMAL_H
#define UNTITLED1_MAMMAL_H
#include <string>

#include "Animal.h"

class Mammal :public Animal
{
    private:
    std::string furColor;
    public:
    Mammal(int age , string na,string fc);
};
#endif
