#include <iostream>
#include <string>
using namespace std;

class Publisher
{
private:
    string Name;
public:
    Publisher(string Name);
    void print();
    ~Publisher();
};
