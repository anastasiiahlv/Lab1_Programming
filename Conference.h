#ifndef LAB2_CONFERENCE_H
#define LAB2_CONFERENCE_H
#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

class Conference: public Event {
protected:
    string topic;
    double price;

public:
    Conference(string name, string date, string time, string location, string id, string topic, double price);
    string getTopicOfConf();
    double getPriceForConf();
    void getInfoAboutConference();
    ~Conference();
};
#endif //LAB2_CONFERENCE_H
