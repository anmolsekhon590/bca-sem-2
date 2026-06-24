#include <iostream>

using namespace std;

class Clock {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Clock() {
        hours = 0;
        minutes = 0;
        seconds = 0; 
    }
    void display();
};

void Clock::display() {
    cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
}

int main() {
    Clock* c = new Clock();
    c->display(); 
   
    Clock c2;
    c2.display();
 
    delete c;
    return 0;
}
