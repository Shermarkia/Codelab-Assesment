#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hometown;
    int age;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear newline character
    cout << "Enter your hometown: ";
    getline(cin, hometown);
    
    cout << "\n--- Biography ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hometown: " << hometown << endl;
    
    return 0;
}
