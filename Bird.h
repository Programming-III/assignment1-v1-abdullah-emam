#ifndef UNTITLED1_BIRD_H
#define UNTITLED1_BIRD_H
#include "Animal.h"

class Bird : public Animal
{
    private:
    float wingSpan;
    public:
    Bird(int age, string na,float ws);
};
#endif
