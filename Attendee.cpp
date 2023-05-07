#include "Attendee.h"
#include <iostream>
#include <string>
#include <utility>
#include "Event.h"
using namespace std;

Attendee::Attendee() =default;

Attendee::Attendee(string fullName, string email, string phoneNumber, Event* event) {
    this->fullName = std::move(fullName);
    this->email = std::move(email);
    this->phoneNumber = std::move(phoneNumber);
    this->event = event;
}

string Attendee::getNameOfAttendee() {
    return fullName;
}

string Attendee::getEmail() {
    return email;
}

string Attendee::getPhoneNumber() {
    return phoneNumber;
}

Event* Attendee::getEvent() {
    return event;
}

void Attendee::getInfoAboutAttendee() {
    cout << "-----------------------------------" << endl;
    cout << "Information about attendee: " << fullName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone number: " << phoneNumber << endl;
    cout << "Registered for the event: " << event->getNameOfEvent()  << endl;
    cout << "-----------------------------------" << endl;
}

bool operator ==(Attendee& attendee1, Attendee& attendee2) {
    return attendee1.getEvent() == attendee2.getEvent();
}

Attendee::~Attendee() = default;