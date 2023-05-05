#ifndef LAB2_ATTENDEE_H
#define LAB2_ATTENDEE_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
using namespace std;

class Attendee {
protected:
    string fullName;
    string email;
    string phoneNumber;
    string eventName;
    Event* event;

public:
    Attendee();
    Attendee(string fullName, string email, string phoneNumber, Event* event);
    string getNameOfAttendee();
    Event* getEvent();
    void attendeePrintInfo();
    ~Attendee();
};


#endif //LAB2_ATTENDEE_H
