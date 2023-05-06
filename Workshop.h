#ifndef LAB2_WORKSHOP_H
#define LAB2_WORKSHOP_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
using namespace std;

class Workshop: public Event {
protected:
    string topic;
    double price;
    vector <double> scores;
    vector <string> reviews;

public:
    Workshop(string name, string date, string time, string location, string id, string topic, double price);
    string getTopicOfWorkshop();
    double getPriceForWorkshop() const;
    void setFeedback();
    void getFeedback();
    void getInfoAboutWorkshop();
    ~Workshop();
};
#endif //LAB2_WORKSHOP_H
