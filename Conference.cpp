#include "Conference.h"
#include "Event.h"
#include <iostream>
#include <string>
#include <utility>

using namespace std;

Conference::Conference(string name, string date, string time, string location, string id,
                       string topic, double price)
        : Event(std::move(name), std::move(date), std::move(time), std::move(location), std::move(id)),
        topic(std::move(topic)), price(price) {}

string Conference::getTopicOfConf() {
    return topic;
}

double Conference::getPriceForConf() {
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