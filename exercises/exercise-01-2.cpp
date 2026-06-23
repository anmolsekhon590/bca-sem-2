#include <iostream>

using namespace std;

bool isEligible(int age);

int main () {
    int age;    

    cout << "Enter age: ";
    cin >> age;

    if (isEligible(age)) {
        cout << "Eligible";
    } else {
        cout << "Not eligible";
    }

    return 0;
}


bool isEligible(int age) {
    if (age > 18) {
        return true;
    } else {
        return false; 
    }
}
