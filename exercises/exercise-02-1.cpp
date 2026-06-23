#include <iostream>

using namespace std;

void gradeScore(float score);

int main() {
    float score;

    cout << "Enter score: ";
    cin >> score;

    gradeScore(score);
}

void gradeScore(float score) {
    if (score >= 90) {
        cout << "A";
    } else if (score >=80 && score < 90) {
        cout << "B";
    } else if (score >= 70 && score < 80) {
        cout << "C";
    } else if (score >= 60 && score < 70) {
        cout << "D";
    } else {
        cout << "F";
    }
}
