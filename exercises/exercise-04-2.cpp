#include <iostream>

using namespace std;

class Grades {
private:
    int marks[5];
    int count = 0;
public:
    void addMark(int m);
    float average();
    void display();
};

void Grades::addMark(int M) {
    marks[count] = M;
    count++;    
}

float Grades::average() {
    float sum = 0; 
    for (int i = 0; i < count; i++) {
        sum += marks[i]; 
    }

    return sum / count; 
}

void Grades::display() {
    cout << "Marks: ";
    for (int i = 0; i < count; i++) {
        cout << marks[i] << " ";
    }
}

int main() {
       
    Grades g1;
    g1.addMark(80); 
    g1.addMark(90); 
    g1.addMark(75); 
    g1.addMark(85); 
    g1.addMark(95); 

    g1.display();

    cout << "\nAverage: " << g1.average();

    return 0;
}
