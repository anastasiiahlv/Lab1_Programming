#ifndef LAB2_EVENTMANAGER_H
#define LAB2_EVENTMANAGER_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
#include "Attendee.h"
using namespace std;

class EventManager: public Event, public Attendee {
protected:
    Event event;
    Attendee attendee;
    vector <Event*> events;
    vector <Attendee> attendees;

public:
    EventManager(string name, string date, string time, string location, string id, string fullName, string email, string phoneNumber, Event* event);
    EventManager(vector <Event*> events, vector <Attendee> attendees);
    void addEvent(Event* event);
    void addAttendee(Attendee attendee);
    void removeEvent(Event* event);
    void removeAttendee(Attendee attendee);
    void findEvent(string id);
    void findAttendee(string fullName);
    void attendeeRegistration(Event* event);
    void printAllEvents();
    void printAllAttendees();
    friend bool operator ==(Attendee& attendee1, Attendee& attendee2);
    void isAttendeesAtSameEvent(Attendee attendee1, Attendee attendee2);
    ~EventManager();
};
#endif //LAB2_EVENTMANAGER_H
