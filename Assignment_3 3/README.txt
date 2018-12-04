Authors: Christine Laurendeau, Ryo Kinjo

Purpose: This program allows users to interact with an event
management system, with each entered event being stored on a Calendar.

Program Files: main.cc Control.h Control.cc View.h View.cc List.h List.cc Time.h Time.cc Date.h Date.cc Event.h Event.cc WorkEvent.h WorkEvent.cc SchoolEvent.h SchoolEvent.cc Calendar.h Calendar.cc

Instructions:
In the directory where the README.txt file is located, run the command: make
After the program has been compiled, it can be executed either by:

    Launching it by itself: ./cal
    Or by feeding the executable input from the in.txt file: ./cal < in.txt

The program will instruct the user how to input events into the program if
they decide to manually enter the events. Once input values have stopped being
proccessed by the program, the calendar will be printed to the screen.