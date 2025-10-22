#include <iostream>
using namespace std;
const int MAX = 100;
int queue[MAX];
int front = -1, rear = -1;
void Enqueue() {
    int val;
    if (rear == MAX - 1) {
        cout<<"Queue Overflow! Cannot insert more elements.\n";
    } else {
        cout << "Enter value to enqueue: ";
        cin >> val;
        if (front == -1) front = 0; 
        rear++;
        queue[rear] = val;
        cout << val << " inserted into queue.\n";
    }
}
void Dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! No element to delete.\n";
    } else {
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }
}
void Display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    int choice;
    cout << "=== Queue Operations Menu ===\n";
    cout << "1. Enqueue (Insert)\n";
    cout << "2. Dequeue (Delete)\n";
    cout << "3. Display Queue\n";
    cout << "4. Exit\n";

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

