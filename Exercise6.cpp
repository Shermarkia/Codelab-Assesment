#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "secret";
    string guess;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;
    
    while (attempts < MAX_ATTEMPTS) {
        cout << "Enter password (attempt " << attempts + 1 << "/" << MAX_ATTEMPTS << "): ";
        cin >> guess;
        attempts++;
        
        if (guess == password) {
            cout << "Access granted!" << endl;
            break;
        } else {
            cout << "Access denied!" << endl;
        }
    }
    
    if (attempts == MAX_ATTEMPTS && guess != password) {
        cout << "Maximum attempts reached. System locked!" << endl;
    }
    
    return 0;
}
