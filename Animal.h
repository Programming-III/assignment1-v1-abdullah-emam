#ifndef UNTITLED1_ANIMAL_H
#define UNTITLED1_ANIMAL_H
#include <string>
using namespace std;
class Animal
{
    private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal();
    Animal(int age, string name);
    void display();
    void feed();
    ~Animal();
};
#endif //UNTITLED1_ANIMAL
