#include <iostream>

using namespace std;

class Vehicle {
public:
    void move() {
        cout << "Vehicle moves" << endl;
    }
};

class Car : public Vehicle {
public:
    void fuel() {
        cout << "Runs on petrol" << endl;
    }
};

class SportsCar : public Car {
public:
    void turbo() {
        cout << "Turbo boost" << endl; 
    }
};

int main() {
    SportsCar s;
    s.move();
    s.fuel();
    s.turbo();     

    return 0;
}
