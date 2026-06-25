#include <iostream>

using namespace std;

class Person {
public:
    string name;
    Person() {
        name = "<name placeholder>"; 
    }
    Person(string n) {
        name = n;
    }
};

class Employee : public Person {
public:
    int id;
    Employee(string n, int i) : Person(n), id(i) {} // practice these list initializers more
};

int main() {
    string name = "Anmol";
    int id = 101;

    Employee e1(name, id);
    cout << "Name: " << e1.name << " | ID: " << e1.id << endl;  

    return 0;
}

