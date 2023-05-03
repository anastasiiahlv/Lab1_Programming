#include "EventManager.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
#include "Attendee.h"
using namespace std;

EventManager::EventManager(string name, string date, string time, string location, string id, string fullName, string email, string phoneNumber, Event event)
        :Event(name, date, time, location, id), Attendee(fullName, email, phoneNumber, event) {};

EventManager::EventManager(vector <Event> events, vector <Attendee> attendees) {
    this->events = events;
    this->attendees = attendees;
}

void EventManager::addEvent(Event event) {
    events.push_back(event);
}

void EventManager::addAttendee(Attendee attendee) {
    attendees.push_back(attendee);
}

void EventManager::removeEvent(Event event) {
    string name = event.name;
    for (int i = 0; i < events.size(); i++) {
        if (events[i].name == name) {
            vector<Event>::iterator it = events.begin() + i;
            events.erase(it);
            break;
        }
    }
}

void EventManager::removeAttendee(Attendee attendee) {
    string name = attendee.fullName;
    for (int i = 0; i < attendees.size(); i++) {
        if (attendees[i].fullName == name) {
            vector<Attendee>::iterator it = attendees.begin() + i;
            attendees.erase(it);
            break;
        }
    }
}

void EventManager::findEvent(string id) {
    int n = 0;
    for (int i = 0; i < events.size(); i++) {
        if (events[i].id == id) {
            events[i].eventPrintInfo();
            n++;
            break;
        }
    }
    if (n == 0)
        cout << "No attendee with that name has been found. Please try again." << endl;
}

void EventManager::findAttendee(string fullName) {
    int n = 0;
    for (int i = 0; i < attendees.size(); i++) {
        if (attendees[i].fullName == fullName) {
            n++;
            attendees[i].attendeePrintInfo(attendees[i].event);
            break;
        }
    }
    if (n == 0)
        cout << "No attendee with that name has been found. Please try again." << endl;
}

void EventManager::attendeeRegistration(Event event) {
    cout << "Enter attendee's full name: ";
    getline(cin, fullName);
    cout << "Enter attendee's email: ";
    getline(cin, email);
    cout << "Enter attendee's phone number: ";
    getline(cin, phoneNumber);

    Attendee registred_attendee(fullName, email, phoneNumber, event);
    addAttendee(registred_attendee);

    for (int i = 0; i < attendees.size(); i++) {
        if (attendees[i].event == event)
            attendees[i].attendeePrintInfo(event);
    }
}

EventManager::~EventManager() = default;