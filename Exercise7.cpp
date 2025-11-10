#include <iostream>
using namespace std;

int main() {
    // Count from 1 to 10
    cout << "Counting 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // Count even numbers between 1-20
    cout << "\nEven numbers between 1-20:" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    
    // Countdown from 10 to 1
    cout << "\nCountdown from 10 to 1:" << endl;
    int count = 10;
    while (count >= 1) {
        cout << count << " ";
        count--;
    }
    cout << endl;
    
    return 0;
}
