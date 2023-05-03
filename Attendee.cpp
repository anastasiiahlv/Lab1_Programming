#include "Attendee.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
using namespace std;

Attendee :: Attendee() = default;

Attendee :: Attendee(string fullName, string email, string phoneNumber, Event event) {
    this->fullName = fullName;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->event = event;
}

void Attendee :: attendeePrintInfo(Event event) {
    cout << "-----------------------------------" << endl;
    cout << "Information about attendee: " << fullName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone number: " << phoneNumber << endl;
    cout << "Registered for the event: " << event.name << endl;
    cout << "-----------------------------------" << endl;
}

Attendee :: ~Attendee() = default;