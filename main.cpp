#include <iostream>
#include <string>
#include <vector>
#include "Event.h"
#include "Conference.h"
#include "Workshop.h"
#include "Attendee.h"
#include "EventManager.h"
#include "EventPlanner.h"
using namespace std;

int main() {
    vector <Event*> events;
    vector <Attendee> attendees;
    vector <EventPlanner> planners;
    EventManager manager(events, attendees, planners);

    // Сreating events and adding them to the vector events
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
    manager.addEvent(&conferense2);

    // Creating attendees and adding them to the vector attendees
    Attendee person1("Andrii Shevshenko", "andrii@gmail.com", "380968875884", &conferense1);
    Attendee person2("Alla Shevsh", "alla@gmail.com", "380968875899", &workshop2);
    Attendee person3("Tanya Klymenko", "tanya@gmail.com", "380967356472", &conferense2);

    manager.addAttendee(person1);
    manager.addAttendee(person2);
    manager.addAttendee(person3);

    // Creating event planners and adding them to the vector planners
    EventPlanner planner1("Margarita Melnik", "margarita@gmail.com", "380986482674", &workshop1);
    EventPlanner planner2("Maria Zbirenko", "maria@gmail.com", "380988579111", &workshop2);
    EventPlanner planner3("Anna Kovaleva", "anna@gmail.com", "380987589374", &workshop2);
    EventPlanner planner4("Alina Bylich", "alina@gmail.com", "380986482888", &conferense1);

    manager.addPlanner(planner1);
    manager.addPlanner(planner2);
    manager.addPlanner(planner3);
    manager.addPlanner(planner4);

    //check for add methods
    //manager.printAllEvents();
    //manager.printAllAttendees();
    //manager.printAllPlanners();

    // check find methods
    //manager.findEvent("WCA414076");
    //manager.findAttendee("Andrii Shevshenko");
    //manager.findPlanner(&workshop2);
    //manager.findPlanner(&conferense2);

    //check remove methods
    //manager.removePlanner(planner1);
    //manager.printAllPlanners();

    //check for operator overloading
    //manager.areAttendeesAtSameEvent(person1, person2);
    //manager.areOrganiseSameEvent(planner2, planner3);

    // Attendee registration
    //manager.attendeeRegistration(&conferense1);

    return 0;
}