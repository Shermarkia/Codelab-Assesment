#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    
    // Test multiple numbers
    cout << "\nTesting numbers 1-10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " is " << (isEven(i) ? "even" : "odd") << endl;
    }
    
    return 0;
}

