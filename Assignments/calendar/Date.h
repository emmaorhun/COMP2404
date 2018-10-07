#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    Date(int=0, int=0, int=2000);
    ~Date();
    void set(int, int, int);
    void printShort();
    void printLong();

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr();
};

#endif
