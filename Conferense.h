#ifndef LAB2_CONFERENSE_H
#define LAB2_CONFERENSE_H
#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

class Conferense: public Event {
protected:
    string topic;
    double price;

public:
    Conferense();
    Conferense(string name, string date, string time, string location, string id, string topic, double price);
    void confInfo();
    ~Conferense();
};


#endif //LAB2_CONFERENSE_H
