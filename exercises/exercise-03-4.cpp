#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main() {
    Student s1{"Alice", 20, 3.8};
    Student s2{"Bob", 22, 3.5};

    cout << "Name: " << s1.name << " Age: " << s1.age << " GPA: " << s1.gpa;
    cout << "\nName: " << s2.name << " Age: " << s2.age << " GPA: " << s2.gpa;

    return 0;  
}
