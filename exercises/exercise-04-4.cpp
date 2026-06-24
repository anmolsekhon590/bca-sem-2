#include <iostream>

using namespace std;

float bill(float price, int qty, float discount = 0) {
    return price * qty - discount;
}

int main() {
    cout << "bill(100, 3):      " << bill(100, 3) << endl;
    cout << "bill(100, 3, 50):  " << bill(100, 3, 50) << endl;

    return 0;
}
