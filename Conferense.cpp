#include "Conferense.h"
#include "Event.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <utility>
using namespace std;

Conferense::Conferense() = default;

Conferense::Conferense(string name, string date, string time, string location, string id,
                       string topic, double price)
        : Event(name, date, time, location, id), topic(topic), price(price) {}

        void Conferense:: confInfo() {
    cout << "-----------------------------------" << endl;
    cout << "Information about the conferense: " << name << endl;
    cout << "Topic: " << topic << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Location: " << location << endl;
    cout << "Id: " << id << endl;
    cout << "Price: " << price << endl;
    cout << "-----------------------------------" << endl;
}

Conferense :: ~Conferense() = default;