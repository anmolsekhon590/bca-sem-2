#include <iostream>

using namespace std;

class BankAccount {
    string owner;
    float balance;
public:
    BankAccount(string o, float b) {
        owner = o;
        balance = b;   
    }
    void display() {
        cout << "Account: " << owner << " | " << "Balance: " << balance << endl; 
    }
};

int main() {
    string name;
    float bal;

    cout << "Enter owner name: ";
    cin >> name;

    cout << "Enter balance: ";
    cin >> bal;

    BankAccount b1(name, bal);
    b1.display();

    return 0; 
}
