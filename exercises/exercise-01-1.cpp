#include <iostream>

using namespace std;

void doArithmeticOps(float num1, float num2);

int main () {

    float num1, num2;

    cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "\nEnter the second number: ";
    cin >> num2;

    doArithmeticOps(num1, num2);

    return 0;
}

void doArithmeticOps(float num1, float num2) {
    cout << "\nAdd:\t" << num1 + num2;
    cout << "\nSubtract:\t" << num1 - num2;
    cout << "\nMultiply:\t" << num1 * num2;
    cout << "\nDivide:\t" << num1 / num2;
    cout << "\nModulo:\t" << (int) num1 % (int) num2;
}

