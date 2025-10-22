#include <iostream>
using namespace std;

int main() {
    const int SIZE = 15;
    int scores[SIZE];

    // Input student scores
    cout << "Enter scores of 15 students:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Score of student " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Bubble Sort algorithm
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    // Display sorted scores
    cout << "\nStudent scores in ascending order:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Rank " << i + 1 << ": " << scores[i] << endl;
    }

    return 0;
}

