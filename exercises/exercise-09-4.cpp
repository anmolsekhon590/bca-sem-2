#include <iostream>

using namespace std;

class Shape {
public:
    virtual float area() {
        return 0;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) {
        radius = r; 
    }
    float area() {
        return 3.14 * radius * radius;  
    } 
};

class Triangle : public Shape {
private:
    float base;
    float height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    float area() {
        return 0.5 * base * height;  
    }
};

int main() {
    Circle c1(8);
    cout << "Circle area: " << c1.area() << endl;

    Triangle t1(8, 3);
    cout << "Triangle area: " << t1.area() << endl;  
    
    return 0;
}
