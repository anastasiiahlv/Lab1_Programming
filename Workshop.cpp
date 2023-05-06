#include "Workshop.h"
#include "Event.h"
#include <iostream>
#include <string>

using namespace std;

Workshop::Workshop(string name, string date, string time, string location, string id, string topic, double price)
        : Event(name, date, time, location, id), topic(topic), price(price) {};

string Workshop::getTopicOfWorkshop() {
    return topic;
}

double Workshop::getPriceForWorkshop() const {
    return price;
}

void Workshop::setFeedback() {
    double score;
    string feedback;
    cout << "Thank you for attending our event! Please rate the conference from 1 to 10: ";
    cin >> score;
    while(score < 0 || score > 10) {
        cout << "Wrong input. Try again." << endl;
        cin >> score;
    }
    scores.push_back(score);

    cout << "Please leave a review: ";
    getline(cin>>ws, feedback);
    reviews.push_back(feedback);
}

void Workshop::getFeedback() {
    if(scores.empty())
        cout << "There are no scores for this workshop." << endl;
    else {
        cout << "Scores for the workshop: " << endl;
        cout << "| ";
        for (auto it = scores.begin(); it != scores.end(); it++)
            cout << *it << " | ";
    }

    cout << endl;

    if(reviews.empty())
        cout << "There are no reviews for this workshop." << endl;
    else {
        cout << "Reviews for the workshop: " << endl;
        cout << "| ";
        for(auto it = reviews.begin(); it != reviews.end(); it++)
            cout << *it << " | ";
    }
}

void Workshop::getInfoAboutWorkshop() {
    cout << "-----------------------------------" << endl;
    cout << "---Information about the workshop: " << name << "---" << endl;
    cout << "Topic: " << topic << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Location: " << location << endl;
    cout << "Id: " << id << endl;
    cout << "Price: " << price << endl;
    cout << "-----------------------------------" << endl;
}

Workshop::~Workshop() = default;