#include <iostream>

using namespace std;

const float PI = 3.14;

class Circle {
private:
    float radius;

public:
    Circle() {}     
    Circle(float r) {
        radius = r;
    }
    float getArea();
};

float Circle::getArea() {
    return PI * radius * radius; 
}

int main() {
    Circle c1;
    Circle c2(4.3);

    cout << c2.getArea();
}
