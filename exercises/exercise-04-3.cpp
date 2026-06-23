#include <iostream>

using namespace std;

void doubleVal(int x) {
    x = 2 * x;
}

void doubleRef(int &x) {
    x = 2 * x;
}

int main() {

    int num = 5;

    cout << "Original: " << num;
    doubleVal(num);

    cout << "\nAfter doubleVal: " << num;
    
    doubleRef(num); 
    cout << "\nAfter doubleRef: " << num;

    return 0;
}
