#include <iostream>

using namespace std;

void display(int x) {
    cout << "int: " << x << endl;
}

void display(float x) {
    cout << "float: " << x << endl;
}

void display(string x) {
    cout << "string: " << x << endl;
}

int main() {
    int i = 42;
    float f = 3.14;
    string s = "hello";

    display(i);
    display(f);
    display(s);    

    return 0;
}
