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
    Clock(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display();
};

void Clock::display() {
    cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
}

int main() {
    
    Clock c1;
    c1.display();

    Clock c2(10, 30, 45);
    c2.display(); 
    
    return 0;
}
