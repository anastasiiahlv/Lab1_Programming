#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Event.h"
#include "Conferense.h"
#include "Workshop.h"
#include "Attendee.h"
#include "EventManager.h"
using namespace std;

int main()
{
    Event event;
    vector <Event> events;
    vector <Attendee> attendees;
    EventManager manager(events, attendees);

    Conferense conferense1("Conference on Technology, Engineering & Management","21.05.2023","17:00",
                           "Ipoh, Malaysia", "WCA414076", "Systems Engineering", 150);
    Conferense conferense2("Conference on Agricultural and Biological Science", "30.06.2023", "16:00",
                           "Oslo, Norway","WCA415656", "Biology", 120);

    Workshop workshop1("Time Management", "17.05.2023", "15:00", "Bangalore, India",
                       "WCA526672", "Psychology", 100);
    Workshop workshop2("FACTECH 2023", "15.07.2023", "12:00", "Bangkok , Thailand",
                       "WCA413523", "Engineering", 250);

    Event event1("Happy Birthday", "20.04.2023", "15:00", "Caffee", "23.24.25");
    Event event2("Wedding", "20.09.2023", "19:00", "Caffee", "1");

    //manager.addEvent(event1);
    //manager.addEvent(event2);

    manager.addEvent(workshop1);
    manager.addEvent(conferense1);

    conferense2.eventPrintInfo();

    Attendee person1("Andrii Shevshenko", "andrii@gmail.com", "380968875884", conferense1);
    Attendee person2("Alla Shevsh", "alla@gmail.com", "3809688758", conferense2);

    manager.addAttendee(person1);
    manager.addAttendee(person2);

    manager.attendeeRegistration(conferense1);

    //event1.eventPrintInfo();
    //event2.eventPrintInfo();

    //manager.findEvent("1");

    //manager.removeEvent(event1);

    return 0;
}