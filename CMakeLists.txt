cmake_minimum_required(VERSION 3.25)
project(Lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab2 main.cpp Event.cpp Event.h Conference.cpp Conference.h Workshop.cpp Workshop.h Attendee.cpp Attendee.h EventManager.cpp EventManager.h eventPlanner.cpp eventPlanner.h)
