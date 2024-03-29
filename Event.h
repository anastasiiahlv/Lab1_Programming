#ifndef LAB2_EVENT_H
#define LAB2_EVENT_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

class Event {
protected:
    string name;
    string date;
    string time;
    string location;
    string id;

public:
    Event();
    Event(string name, string date, string time, string location, string id);
    string getNameOfEvent();
    string getDate();
    string getTime();
    string getLocation();
    string getId();
    void getInfoAboutEvent();
    friend bool operator ==(Event& event1, Event& event2);
    ~Event();
};
#endif //LAB2_EVENT_H
