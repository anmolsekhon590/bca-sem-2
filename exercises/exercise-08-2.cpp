#include <iostream>

using namespace std;

class Rectangle {
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() {
        return length * width; 
    }       
};

int main() {
    Rectangle r1(5, 10);

    cout << "Area: " << r1.area();

    return 0; 
}
