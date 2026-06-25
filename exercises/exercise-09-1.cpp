#include <iostream>

using namespace std;

class Animal {
public:
    string name;
    virtual void speak() {
        cout << "Some sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Woof" << endl;
    }
};

int main() {
    
    Animal a;
    a.speak();

    Dog d;
    d.speak(); 

    return 0;
}
