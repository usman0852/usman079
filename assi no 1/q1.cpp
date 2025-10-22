#include <iostream>
using namespace std;

int main() {
    int marks[10] = {65, 78, 82, 90, 56, 88, 74, 93, 70, 85};
    int max1 = -1, max2 = -1;

    for (int i = 0; i < 10; i++) {
        if (marks[i] > max1) {
            max2 = max1;
            max1 = marks[i];
        } else if (marks[i] > max2 && marks[i] != max1) {
            max2 = marks[i];
        }
    }
    cout << "Highest mark: " << max1 << endl;
    cout << "Second highest mark: " << max2 << endl;

    return 0;
}
