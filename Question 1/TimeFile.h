#include <iostream>
using namespace std;

class Time
{
private:    //private data members
    int hour;
    int minute;
    int second;
public:   //public member functions
    ~Time();
    Time();
    void setTime(int h, int m, int s);
    void print();
};
