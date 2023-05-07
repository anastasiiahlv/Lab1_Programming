#include "EventManager.h"
#include <iostream>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include "Event.h"
#include "Attendee.h"
using namespace std;

EventManager::EventManager(vector <Event*> events, vector <Attendee> attendees, vector <EventPlanner> planners) {
    this->events = std::move(events);
    this->attendees = std::move(attendees);
    this->planners = std::move(planners);
}

void EventManager::addEvent(Event* event) {
    events.push_back(event);
}

void EventManager::addAttendee(Attendee attendee) {
    attendees.push_back(attendee);
}

void EventManager::addPlanner(EventPlanner planner) {
    planners.push_back(planner);
}

void EventManager::removeEvent(Event* event) {
    string name = event->getNameOfEvent();
    for (int i = 0; i < events.size(); i++) {
        if (events[i]->getNameOfEvent() == name) {
            auto it = events.begin() + i;
            events.erase(it);
            break;
        }
    }
}

void EventManager::removeAttendee(Attendee attendee) {
    string name = attendee.getNameOfAttendee();
    for (int i = 0; i < attendees.size(); i++) {
        if (attendees[i].getNameOfAttendee() == name) {
            auto it = attendees.begin() + i;
            attendees.erase(it);
            break;
        }
    }
}

void EventManager::removePlanner(EventPlanner planner) {
    string name = planner.getEventName();
    for (int i = 0; i < planners.size(); i++) {
        if (planners[i].getEventName() == name) {
            auto it = planners.begin() + i;
            planners.erase(it);
            break;
        }
    }
}

void EventManager::findEvent(string id) {
    int n = 0;
    for (auto & event : events) {
        if (event->getId() == id) {
            event->getInfoAboutEvent();
            n++;
        }
    }
    if (n == 0)
        cout << "No attendee with that name has been found. Please try again." << endl;
}

void EventManager::findAttendee(string fullName) {
    int n = 0;
    for (auto & attendee : attendees) {
        if (attendee.getNameOfAttendee() == fullName) {
            n++;
            attendee.getInfoAboutAttendee();
        }
    }
    if (n == 0)
        cout << "No attendee with that name has been found. Please try again." << endl;
}

void EventManager::findPlanner(Event* event) {
    int n = 0;
    for (auto & planner : planners) {
        if (planner.getEventName() == event->getNameOfEvent()) {
            n++;
            planner.getInfoAboutPlanner();
        }
    }
    if (n == 0)
        cout << "No event planner with that name has been found. Please try again." << endl;
}

void EventManager::attendeeRegistration(Event* event) {
    string fullName;
    string email;
    string phoneNumber;
    cout << "Enter attendee's full name: ";
    getline(cin, fullName);
    cout << "Enter attendee's email: ";
    getline(cin, email);
    cout << "Enter attendee's phone number: ";
    getline(cin, phoneNumber);

    Attendee registred_attendee(fullName, email, phoneNumber, event);
    addAttendee(registred_attendee);

    for (auto & attendee : attendees) {
        if (attendee.getEvent() == event)
            attendee.getInfoAboutAttendee();
    }
}

void EventManager::printAllEvents() {
    if(events.empty())
        cout << "No events were registered." << endl;
    else {
        cout << "Registred events: " << endl;
        for (auto & event : events)
                event->getInfoAboutEvent();
    }
}

void EventManager::printAllAttendees() {
    if(attendees.empty())
        cout << "No attendees were registered." << endl;
    else {
        cout << "Registred attendees: " << endl;
        for (auto &attendee: attendees)
            attendee.getInfoAboutAttendee();
    }
}

void EventManager::printAllPlanners() {
    if(planners.empty())
        cout << "No event planners were registered." << endl;
    else {
        cout << "Registred attendees: " << endl;
        for (auto &planner: planners)
            planner.getInfoAboutPlanner();
    }
}

void EventManager::areAttendeesAtSameEvent(Attendee attendee1, Attendee attendee2) {
    if(attendee1 == attendee2)
        cout << "These attendees are at the same event: " << attendee1.getEvent()->getNameOfEvent() << endl;
    else
        cout << "These attendees are NOT at the same event." << endl;
}

void EventManager::areOrganiseSameEvent(EventPlanner planner1, EventPlanner planner2) {
    if(planner1 == planner2)
        cout << "These event planners are organising the same event: " << planner1.getEventName() << endl;
    else
        cout << "These event planners are NOT organising the same event." << endl;
}

EventManager::~EventManager() = default;