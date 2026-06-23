#include <iostream>

using namespace std;

int main() {

    int num = 10;

    int *numptr;
    numptr = &num;

    cout << "Value: " << num;
    cout << "\nValue via pointer: " << *numptr;

    *numptr = 20;
    
    cout << "\nValue after change: " << *numptr;

    return 0;
}
