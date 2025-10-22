#include <iostream>
using namespace std;

int main() {
    const int SUBJECTS = 6;
    int marks[SUBJECTS];
    int sum = 0;
    float average;
    cout << "Enter marks of 6 subjects:\n";
    for (int i = 0; i < SUBJECTS; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
    average = sum / (float)SUBJECTS;
    cout << "\nAverage Marks: " << average << endl;
    if (average > 90) {
        cout << "Grade: A+" << endl;
    } else if (average > 80) {
        cout << "Grade: A" << endl;
    } else if (average > 70) {
        cout << "Grade: B" << endl;
    } else if (average > 60) {
        cout << "Grade: C" << endl;
    } else if (average > 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}

