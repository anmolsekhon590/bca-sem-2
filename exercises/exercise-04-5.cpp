#include <iostream>

using namespace std;

class Rectangle {
public: 
    float length;
    float width;
};

void printArea(Rectangle r) {       // r is a copy of the original
    cout << "By value:     " << r.length * r.width << endl;
}

void printAreaRef(Rectangle &r) {   // r is the original object
    cout << "By reference: " << r.length * r.width << endl;
}

int main() {

    Rectangle r1;
    r1.length = 10;
    r1.width = 5;

    printArea(r1);      // passes a copy
    printAreaRef(r1);   // passes the original — no & at call site

    return 0;
}
