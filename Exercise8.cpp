#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {10, 25, 30, 45, 50};
    int target;
    
    cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    cout << "Enter number to search: ";
    cin >> target;
    
    bool found = false;
    int position = -1;
    
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == target) {
            found = true;
            position = i;
            break;
        }
    }
    
    if (found) {
        cout << "Number found at position: " << position << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }
    
    return 0;
}
