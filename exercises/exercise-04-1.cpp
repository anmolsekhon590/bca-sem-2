#include <iostream>

using namespace std;

class Temperature {
private:
    float celcius;
    float toCelcius(float f);
public:
    void setFromFahrenheit(float f); 
    void display();
};

float Temperature::toCelcius(float f) {
    return (f - 32) * 5 / 9;
}

void Temperature::setFromFahrenheit(float f) {
    float c = toCelcius(f);
    celcius = c;     
}

void Temperature::display() {
    cout << "Celcius: " << celcius; 
}

int main() {
    float f;
    Temperature t;

    cout << "Enter temp in Fahrenheit: ";
    cin >> f;
    
    t.setFromFahrenheit(f); 
    t.display(); 
     
    return 0;
}
