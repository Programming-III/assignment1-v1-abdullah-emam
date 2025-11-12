#ifndef UNTITLED1_REPTILE_H
#define UNTITLED1_REPTILE_H
#include "Animal.h"

class Reptile : public Animal
{
    private:
    bool isVenomous;
    public:
    Reptile(int age, string na, bool isV);
};
#endif
