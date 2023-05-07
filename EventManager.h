#ifndef LAB2_EVENTMANAGER_H
#define LAB2_EVENTMANAGER_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
#include "Attendee.h"
#include "EventPlanner.h"
using namespace std;

class EventManager {
protected:
    vector <Event*> events;
    vector <Attendee> attendees;
    vector <EventPlanner> planners;

public:
    EventManager(vector <Event*> events, vector <Attendee> attendees, vector <EventPlanner> planners);
    void addEvent(Event* event);
    void addAttendee(Attendee attendee);
    void addPlanner(EventPlanner planner);
    void removeEvent(Event* event);
    void removeAttendee(Attendee attendee);
    void removePlanner(EventPlanner planner);
    void findEvent(string id);
    void findAttendee(string fullName);
    void findPlanner(Event* event);
    void attendeeRegistration(Event* event);
    void printAllEvents();
    void printAllAttendees();
    void printAllPlanners();
    void areAttendeesAtSameEvent(Attendee attendee1, Attendee attendee2);
    void areOrganiseSameEvent(EventPlanner planner1, EventPlanner planner2);
    ~EventManager();
};
#endif //LAB2_EVENTMANAGER_H
