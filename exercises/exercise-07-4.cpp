#include <iostream>

using namespace std;

class Point {
public:
    int x;
    int y;
    
    Point(int a, int b) {
        x = a;
        y = b;
    }
    Point(Point &p) {
        x = p.x;
        y = p.y; 
    }
};

int main() {
    Point org(3, 4);
    
    cout << "Original: " << org.x << ", " << org.y << endl;
    
    Point cpy(org);
    cout << "Copy: " << cpy.x << ", " << cpy.y << endl;
    
    cpy.x = 10; 
    cout << "Modified copy: " << cpy.x << ", " << cpy.y << endl;
    
    cout << "Original still: " << org.x << ", " << org.y << endl;

    return 0;
}
