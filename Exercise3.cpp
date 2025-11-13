#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hometown;   // Variables to store the user's name and hometown
    int age;                // Variable to store the user's age
    // Ask the user for their name and read the full line (including spaces)
    cout << "Enter your name: ";
    getline(cin, name);
    // Ask the user for their age and read an integer value
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); 
    // Ask the user for their hometown and read the full line
    cout << "Enter your hometown: ";
    getline(cin, hometown);
   
    // Display the collected information in a "biography" format
    
    cout << "\n--- Biography ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hometown: " << hometown << endl;
   
    
    return 0;
    
    
}

