#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("output.txt");
    file << "Hello" << endl;
    file << "World" << endl;
    file << "Done" << endl;
    file.close(); 
}
