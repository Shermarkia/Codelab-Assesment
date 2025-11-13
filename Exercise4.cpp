#include <iostream>
using namespace std;

int main() {
    int score = 0;
    
    // Question 1
    cout << "1. What is the size of int in bytes? ";
    int answer1;
    cin >> answer1;    // Read the user's answer
    if (answer1 == 4) {
        cout << "Correct!" << endl;
        score++;     // Increase score for correct answer
    } else {
        cout << "Wrong! Size of int is 4 bytes." << endl;
    }
    
    // Question 2
    cout << "2. What is the range of char? (-128 to 127) [y/n] ";
    char answer2;
    cin >> answer2;
    if (answer2 == 'y' || answer2 == 'Y') {
        cout << "Correct!" << endl;
        score++;   // Increase score
    } else {
        cout << "Wrong! Char range is -128 to 127." << endl;
    }
    // Display final score
    cout << "\nYour score: " << score << "/2" << endl;
    
    return 0;
}

