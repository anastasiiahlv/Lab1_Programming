#include "EventPlanner.h"
#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

EventPlanner::EventPlanner(string fullName, string email, string phoneNumber, Event *event) {
    this->fullName = fullName;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->event = event;
}

string EventPlanner::getEventName() {
    return event->getNameOfEvent();
}

string EventPlanner::getNameOfPlanner() {
    return fullName;
}

string EventPlanner::getEmailOfPlanner() {
    return email;
}

string EventPlanner::getPhoneNumberOfPlanner() {
    return phoneNumber;
}

void EventPlanner::getInfoAboutPlanner() {
    cout << "-----------------------------------" << endl;
    cout << "Information about event planner: " << fullName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone number: " << phoneNumber << endl;
    cout << "Organising the event: " << getEventName() << endl;
    cout << "-----------------------------------" << endl;
}

bool operator ==(EventPlanner& planner1, EventPlanner& planner2) {
    return planner1.getEventName() == planner2.getEventName();
}

EventPlanner::~EventPlanner() = default;