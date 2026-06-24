#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(float l = 1, float w = 1) {
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;
    cout << "Area: " << r1.area() << endl;

    Rectangle r2(5);
    cout << "Area: " << r2.area() << endl;

    Rectangle r3(3, 5);
    cout << "Area: " << r3.area() << endl;

    return 0;
}

