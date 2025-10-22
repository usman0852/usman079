#include <iostream>
#include <string>
using namespace std;
struct AntiqueItem {
    string name;
    string type;
    string serialNumber;
};
const int MAX_ITEMS = 100;
int sequentialSearch(AntiqueItem items[], int size, string targetSerial) {
    for (int i = 0; i < size; i++) {
        if (items[i].serialNumber == targetSerial) {
            return i; // found at index i
        }
    }
    return -1; // not found
}
int main() {
    int totalItems;
    cout << "Enter total number of antique items in inventory: ";
    cin >> totalItems;
    AntiqueItem inventory[MAX_ITEMS];
    cin.ignore(); 
    for (int i = 0; i < totalItems; i++) {
        cout << "\nEnter details for item " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, inventory[i].name);
        cout << "Type: ";
        getline(cin, inventory[i].type);
        cout << "Serial Number: ";
        getline(cin, inventory[i].serialNumber);
    }
    string targetSerial;
    cout << "\nEnter serial number of the vintage pocket watch to search: ";
    getline(cin, targetSerial);
    int index = sequentialSearch(inventory, totalItems, targetSerial);
    if (index != -1) {
        cout << "\n? Pocket Watch Found!\n";
        cout << "Name: " << inventory[index].name << endl;
        cout << "Type: " << inventory[index].type << endl;
        cout << "Serial Number: " << inventory[index].serialNumber << endl;
    } else {
        cout << "\n? Pocket Watch with Serial Number '" << targetSerial << "' not found in inventory.\n";
    }
    return 0;
}

