#include <iostream>

using namespace std;

int main() {
    
    int age;
    cout << "Enter age: ";
    cin >> age;

    cout << (age >= 18 ? "Eligible" : "Not eligible");
 
    return 0;
}
