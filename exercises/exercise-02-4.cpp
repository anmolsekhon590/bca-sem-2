#include <iostream>

using namespace std;

int main () {
    int n, sum = 0; 
    int i = 1;
    
    cout << "Enter n: ";
    cin >> n;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum: " << sum;

    return 0;
}
