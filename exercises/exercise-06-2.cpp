#include <iostream>

using namespace std;

class MathUtils {
public:
    static int add(int a, int b) {
        return a + b;
    }
    static int multiply(int a, int b) {
        return a * b; 
    }
};

int main() {
    
    cout << MathUtils::add(3, 5) << endl;
    cout << MathUtils::multiply(3, 5) << endl;  

    return 0;
}
