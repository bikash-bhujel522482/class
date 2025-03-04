#include <iostream>
using namespace std;

int main() {
    int count, i, arr[30], num, first, last, middle;

    cout << "Enter the number of elements you want: ";
    cin >> count;

    // Input validation: Ensure count is within array bounds
    if (count <= 0 || count > 30) {
        cout << "Invalid input. Number of elements must be between 1 and 30." << endl;
        return 1; // Indicate an error
    }

    for (i = 0; i < count; i++) {
        cout << "Enter Your Number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Enter the number that you are going to search: ";
    cin >> num;

    first = 0;
    last = count - 1;

    while (first <= last) {
        middle = (first + last) / 2;

        if (arr[middle] < num) {
            first = middle + 1;
        } else if (arr[middle] == num) {
            cout << num << " found in the array at the location " << middle + 1 << endl;
            break;
        } else {
            last = middle - 1;
        }
    }

    if (first > last) {
        cout << num << " not found in the array" << endl;
    }

    return 0;
}