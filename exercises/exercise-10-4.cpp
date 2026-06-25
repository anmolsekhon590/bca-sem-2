#include <iostream>
#include <fstream>

using namespace std;

class Student {
private:
    string name;
    int marks;
public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }
    void write() {
        ofstream file("student.bin", ios::binary);
        file << "Name: " << name << " | Marks: " << marks << endl;
        file.close();
    }
    void read() {
        ifstream filein("student.bin", ios::binary);
        string line;
        while (getline(filein, line)) {
            cout << line << endl;
        }
    }
};

int main() {
    Student s1("Anmol", 95);
    s1.write();
    s1.read(); 

    return 0;
}
