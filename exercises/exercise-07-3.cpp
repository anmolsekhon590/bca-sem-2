#include <iostream>

using namespace std;

class Box {
private:
    float length;
    float width;
    float height;   
public:
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }
    float volume(); 
};

float Box::volume() {
    return length * width * height; 
}

int main() {
    Box dihBox;
    Box cuhhBox(2, 3, 10);
    
    cout << "Default box volume: " << dihBox.volume() << endl;
    cout << "Custom box volume: " << cuhhBox.volume() << endl;

    return 0;
}
