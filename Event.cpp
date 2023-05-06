#include "Event.h"
#include <iostream>
#include <string>
using namespace std;

Event::Event() = default;

Event::Event(string name, string date, string time, string location, string id) {
    this->name = name;
    this->date = date;
    this->time = time;
    this->location = location;
    this->id = id;
}

string Event::getNameOfEvent() {
    return name;
}

string Event::getDate() {
    return date;
}

string Event::getTime() {
    return time;
}

string Event::getLocation() {
    return location;
}

string Event::getId() {
    return id;
}

void Event::getInfoAboutEvent() const{
    cout << "-----------------------------------" << endl;
    cout << "Information about event: " << name << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Location: " << location << endl;
    cout << "Id of the event: " << id << endl;
    cout << "-----------------------------------" << endl;
}

bool operator ==(Event& event1, Event& event2) {
    return (event1.name == event2.name);
}

Event::~Event() = default;