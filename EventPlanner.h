#ifndef LAB2_EVENTPLANNER_H
#define LAB2_EVENTPLANNER_H
#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

class EventPlanner {
protected:
    string fullName;
    string email;
    string phoneNumber;
    Event* event;
public:
    EventPlanner(string fullName, string email, string phoneNumber, Event* event);
    string getNameOfPlanner();
    string getEmailOfPlanner();
    string getPhoneNumberOfPlanner();
    string getEventName();
    void getInfoAboutPlanner();
    friend bool operator ==(EventPlanner& planner1, EventPlanner& planner2);
    ~EventPlanner();
};
#endif //LAB2_EVENTPLANNER_H
