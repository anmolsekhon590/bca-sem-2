#include <iostream>

using namespace std;

int main () {

    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "\nFizzBuzz";
        } else if (i % 3 == 0) {
            cout << "\nFizz"; 
        } else if (i % 5 == 0) {
            cout << "\nBuzz";
        } else {
            cout << "\n" << i; 
        } 
    }

    return 0;
}
