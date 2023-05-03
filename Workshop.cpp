#include "Workshop.h"
#include "Event.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

Workshop :: Workshop(string name, string date, string time, string location, string id, string topic, double price)
        : Event(name, date, time, location, id), topic(topic), price(price) {};

void Workshop :: getFeedback() {
    double score;
    string feedback;
    cout << "Thank you for attending our event! Please rate the conference from 1 to 10: ";
    cin >> score;
    scores.push_back(score);

    cout << "Please leave a review: ";
    getline(cin, feedback);
    reviews.push_back(feedback);
}

Workshop:: ~Workshop() = default;