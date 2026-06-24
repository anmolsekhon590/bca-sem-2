#include <iostream>

using namespace std;

float area(float side) {
    return side * side;
}

float area(float length, float width) {
    return length * width;
}

float area(float base, float height, bool triangle) {
    return 0.5 * base * height; 
}

int main() {
    
    cout << "Square area: " << area(5) << endl;
    cout << "Rectangle area: " << area(3, 10) << endl;
    cout << "Triangle area: " << area(2, 10, true) << endl;
    
    return 0;
}
