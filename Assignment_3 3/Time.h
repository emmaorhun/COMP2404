#ifndef TIME_H
#define TIME_H

class Time
{
  public:
    Time(int=0, int=0, int=0);
    void set(int, int, int);
    void print();
    bool operator<(Time&);

  private:
    int hours;
    int minutes;
    int seconds;
    int convertToSecs();
};

#endif
