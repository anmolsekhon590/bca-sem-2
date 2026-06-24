#include <iostream>

using namespace std;

class Circle {
    float radius;
    string color;
public:
    Circle(float r, string c) {
        radius = r;
        color = c; 
    }
    Circle(float r) : Circle(r, "red") {} 
    void display() {
        cout << "Radius: " << radius << ", Color: " << color << endl;
    }
};

int main() {

    Circle c1(5, "blue");
    Circle c2(3);   
    
    c1.display();
    c2.display();

    return 0;
} 
