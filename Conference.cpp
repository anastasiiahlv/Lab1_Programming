#include "Conference.h"
#include "Event.h"
#include <iostream>
#include <string>

using namespace std;

Conference::Conference(string name, string date, string time, string location, string id,
                       string topic, double price)
        : Event(name, date, time, location, id), topic(topic), price(price) {}

string Conference::getTopicOfConf() {
    return topic;
}

double Conference::getPriceForConf() const {
    return price;
}

void Conference::getInfoAboutConference() {
    cout << "-----------------------------------" << endl;
    cout << "---Information about the conferense: " << name << "---" << endl;
    cout << "Topic: " << topic << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Location: " << location << endl;
    cout << "Id: " << id << endl;
    cout << "Price: " << price << endl;
    cout << "-----------------------------------" << endl;
}

Conference::~Conference() = default;