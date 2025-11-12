#ifndef UNTITLED1_VISITOR_H
#define UNTITLED1_VISITOR_H
#include <string>
using namespace std;

class Visitor
{
    private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor(string visitorName, int tick);
    void displayInfo();
};
#endif
