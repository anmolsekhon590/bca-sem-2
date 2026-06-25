#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("output.txt", ios::app);
    file << "Appended";
    file.close();

    ifstream file1("output.txt");
    string line;
    while (getline(file1, line)) {
        cout << line << endl;
    }
    
    return 0;
}
