#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {

    Point *p1 = new Point;
    p1->x = 4;
    p1->y = 7; 

    cout << "Point: (" << p1->x << ", " << p1->y << ")"; 


    delete p1; // dont forget to delete after new keyword to clear memory on heap
    return 0;
}
