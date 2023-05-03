#ifndef LAB2_ATTENDEE_H
#define LAB2_ATTENDEE_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
using namespace std;

class Attendee {
public:
    string fullName;
    string email;
    string phoneNumber;
    Event event;

public:
    Attendee();
    Attendee(string fullName, string email, string phoneNumber, Event event);
    void attendeePrintInfo(Event event);
    ~Attendee();
};


#endif //LAB2_ATTENDEE_H
