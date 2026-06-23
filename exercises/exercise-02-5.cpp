#include <iostream>

using namespace std;

int main() {

    int num;

    do {
        cout << "\nEnter a number (1-10): ";
        cin >> num;
        cout << "\nInvalid try again.";  
        
    } while (num > 10);

    cout << "Got it: " << num;
    
} 
