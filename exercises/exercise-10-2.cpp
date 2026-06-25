#include <fstream>
#include <iostream>

using namespace std;

int main() {

    ifstream file("output.txt");
    string line;

    while (getline(file, line)) {
        cout << line << endl;
    } 

    file.close();

    return 0;
}
