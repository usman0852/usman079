#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size, target;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    sort(arr, arr + size);
    cout << "Enter element to search: ";
    cin >> target;
    int low = 0, high = size - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            found = true;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found) {
        cout << "Element " << target << " found in the array.\n";
    } else {
        cout << "Element " << target << " not found in the array.\n";
    }

    return 0;
}
