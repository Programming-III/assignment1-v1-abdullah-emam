#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;
Animal::Animal(int age, string name)
{
    this->age=age;
    this->name=name;
    isHungry=true;
}
Mammal::Mammal(int age , string na,string fc):Animal(age,na)
{
    furColor =fc;
}
Bird::Bird(int age, string na,float ws):Animal(age,na)
{
    wingSpan= ws;
}
Reptile::Reptile(int age, string na, bool isV):Animal(age,na)
{
    isVenomous=isV;
}
Animal::Animal(){}

ENCLOSURE::ENCLOSURE(int cap)
{
   Animal *animal = new Animal[cap];
    animals=animal;
   this->capacity;
    currentCount =0;
}
Visitor::Visitor(string visitorName, int tick)
{
    this->visitorName= visitorName;
    ticketsBought= tick;
}
void Animal::display()
{
    cout<<name<<"( age: "<<age<<", Is Hungry:"<<isHungry<<endl;
}
void Animal::feed()
{
    if (isHungry)
    {
        cout<<"feed the animal"<<endl;
    }
}
void ENCLOSURE::addAnimal(Animal* animal)
{
    if (currentCount= capacity)
    {
        cout<<"cant add another animal"<<endl;
    }
    else
    {
        animals[currentCount]=*animal;
        currentCount++;
    }
}
void ENCLOSURE::display()
{
    for (int i= 0; i<currentCount;i++)
        animals[i].display();
}
void Visitor::displayInfo()
{
    cout<<"name: "<<visitorName<<endl;
    cout<<"Tickets Bought: "<<ticketsBought<<endl;
}
Animal::~Animal()
{
}
ENCLOSURE::~ENCLOSURE()
{
    delete[] animals;
}








int main(){
    ENCLOSURE e(3);
    Mammal m(10,"Lion","red");
    Bird b(3,"Bird",3.5);
    Reptile r(4,"Snake",true);
    e.addAnimal(&m);
    e.addAnimal(&b);
    e.addAnimal(&r);
    Visitor v("Abdullah",3);
    v.displayInfo();
    e.display();
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
