#include <iostream>

using namespace std;

float volume(float side) {
    return side * side * side;
}

float volume(float r, float h) {
    return 3.14 * r * r * h;
}

float volume(float l, float w, float h) {
    return l * w * h;
}

int main() {
    
    cout << "Cube: " << volume(3) << endl;
    cout << "Cylinder: " << volume(2, 5) << endl;
    cout << "Cuboid: " << volume(2, 3, 4) << endl;

    return 0;
}
