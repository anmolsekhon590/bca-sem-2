#include <iostream>

using namespace std;

const float pi = 3.14; 

class Circle {
    public:
    float radius;
    float area();
};

float Circle::area() {
    return pi * this->radius * this->radius;
} 

int main() {
    Circle c1;    
 
    cout << "\nEnter radius: ";
    cin >> c1.radius;

    cout << "\nArea: " << c1.area(); 

    return 0;
}
