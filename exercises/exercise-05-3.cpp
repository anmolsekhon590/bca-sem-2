#include <iostream>

using namespace std;

class Box {
private:
    float volume;
public:
    void setVolume(float v);
    friend void printVolume(Box b); 
};

void Box::setVolume(float v) {
    volume = v;
}

void printVolume(Box b) {
    cout << b.volume << endl;
}

int main() {
    
    Box b;
    b.setVolume(120);
    
    printVolume(b); 

    return 0;
}
