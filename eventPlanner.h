#ifndef LAB2_EVENTPLANNER_H
#define LAB2_EVENTPLANNER_H
#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

class eventPlanner {
protected:
    string fullName;
    string email;
    string phoneNumber;
    Event* event;
public:
    eventPlanner(string fullName, string email, string phoneNumber, Event* event);
    void getEvent();
    void getInfoAboutPlanner();

};
#endif //LAB2_EVENTPLANNER_H
