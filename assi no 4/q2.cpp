#include <iostream>
using namespace std;
struct Student {
    int id;
    string name;
    string section;
};
int binarySearch(Student students[], int size, int targetID) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (students[mid].id == targetID)
            return mid; // Found
        else if (students[mid].id < targetID)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}
int main() {
    const int SIZE = 10;
    Student students[SIZE] = {
        {101, "Ali", "BSET-A"},
        {102, "Ayesha", "BSET-B"},
        {103, "Bilal", "BSET-C"},
        {104, "Dua", "BSET-A"},
        {105, "Fahad", "BSET-B"},
        {106, "Hira", "BSET-C"},
        {107, "Imran", "BSET-A"},
        {108, "Komal", "BSET-B"},
        {109, "Noman", "BSET-C"},
        {110, "Usman", "BSET-B"}
    };
    int searchID;
    cout << "Enter Student ID to search: ";
    cin >> searchID;
    int index = binarySearch(students, SIZE, searchID);
    if (index != -1) {
        cout << "\n? Student Found:\n";
        cout << "ID: " << students[index].id << endl;
        cout << "Name: " << students[index].name << endl;
        cout << "Section: " << students[index].section << endl;
    } else {
        cout << "\n? Student with ID " << searchID << " not found.\n";
    }
    return 0;
}
