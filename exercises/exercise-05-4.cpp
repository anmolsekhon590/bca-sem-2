#include <iostream>

using namespace std;

class Fahrenheit;

class Celsius {
private:
    float temp;
public:
    Celsius(float t) {
        temp = t;
    }
    friend Fahrenheit convert(Celsius c);
};

class Fahrenheit {
private:
    float temp;
public:
    Fahrenheit(float t) {
        temp = t; 
    }
    void display() {
        cout << temp << endl; 
    }
    friend Celsius convert(Fahrenheit f);
};

Celsius convert(Fahrenheit f) {
    float temp = (f.temp - 32) * 5 / 9; 
    Celsius c(temp); 
    return c;
}

Fahrenheit convert(Celsius c) {
    float temp = (c.temp * 9 / 5) + 32;
    Fahrenheit f(temp);
    return f;
}

int main() {
    
    Celsius c(100);
    Fahrenheit f = convert(c);

    f.display();
    
    return 0;
}
