#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "secret";   // The correct password
    string guess;                 // User's guess input
    int attempts = 0;             // Counter for number of attempts
    const int MAX_ATTEMPTS = 3;   // Maximum number of allowed attempts
    
    // Loop until the user reaches the maximum number of attempts
    while (attempts < MAX_ATTEMPTS) {
        // Prompt the user to enter the password
        cout << "Enter password (attempt " << attempts + 1 << "/" << MAX_ATTEMPTS << "): ";
        cin >> guess;             // Read user input
        attempts++;               // Increase the attempt count 
        // Check if the entered password is correct
        if (guess == password) {
            cout << "Access granted!" << endl;
            break;                // Exit the loop if correct
        } else {
            cout << "Access denied!" << endl;
        }
    }
       // If all attempts are used and password still incorrect
    if (attempts == MAX_ATTEMPTS && guess != password) {
        cout << "Maximum attempts reached. System locked!" << endl;
    }
    
    return 0;
}

