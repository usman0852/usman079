#include <iostream>
using namespace std;
const int MAX = 100;
int main() {
    int stack[MAX];
    int top = -1;
    int n, number, max = -1;
    cout << "Enter how many numbers (marks) you want to input: ";
    cin >> n;
    cout << "\nEnter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        if (top < MAX - 1) {
            top++;
            stack[top] = number;
        } else {
            cout << "Stack Overflow! Cannot push more items.\n";
            break;
        }
        if (number > max) {
            max = number;
        }
    }
    cout << "\nEven numbers (popped from stack):\n";
    while (top >= 0) {
        int val = stack[top];
        top--;
        if (val % 2 == 0) {
            cout << val << " ";
        }
    }
    cout << "\n\nHighest mark: " << max << endl;
    return 0;
}

