/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/

#ifndef TIME_H
#define TIME_H

//The time class manages the intricacies of time daily time using hours, minutes, and seconds

class Time
{
  public:
    Time(int=0, int=0, int=0);
    void set(int, int, int);
    void print();
    bool lessThan(Time&);
    void format(string &);

  private:
    int hours;
    int minutes;
    int seconds;
    int convertToSecs();
};

#endif
