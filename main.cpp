#include <iostream>
#include <string>
#include <vector>
#include "Event.h"
#include "Conference.h"
#include "Workshop.h"
#include "Attendee.h"
#include "EventManager.h"
using namespace std;

int main()
{
    vector <Event*> events;
    vector <Attendee> attendees;
    EventManager manager(events, attendees);

    Conference conferense1("Conference on Technology, Engineering & Management", "21.05.2023", "17:00",
                           "Ipoh, Malaysia", "WCA414076", "Systems Engineering", 150);
    Conference conferense2("Conference on Agricultural and Biological Science", "30.06.2023", "16:00",
                           "Oslo, Norway", "WCA415656", "Biology", 120);

    Workshop workshop1("Time Management", "17.05.2023", "15:00", "Bangalore, India",
                       "WCA526672", "Psychology", 100);
    Workshop workshop2("FACTECH 2023", "15.07.2023", "12:00", "Bangkok , Thailand",
                       "WCA413523", "Engineering", 250);

    manager.addEvent(&workshop1);
    manager.addEvent(&workshop2);

    manager.addEvent(&conferense1);
    manager.addEvent(&conferense1);

    Attendee person1("Andrii Shevshenko", "andrii@gmail.com", "380968875884", &conferense1);
    Attendee person2("Alla Shevsh", "alla@gmail.com", "380968875899", &workshop2);
    Attendee person3("Anna Klymenko", "anna@gmail.com", "380967356472", &conferense1);

    manager.addAttendee(person1);
    manager.addAttendee(person2);
    manager.addAttendee(person3);

    //manager.attendeeRegistration(&conferense1);

    //manager.findEvent("WCA526672");
    //manager.findAttendee("Andrii Shevshenko");

    //manager.isAttendeesAtSameEvent(person1, person3);

    return 0;
}