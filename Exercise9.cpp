#include <iostream>
#include <string>
using namespace std;

// Function to display greeting
void sayHello() {
    cout << "Hello!" << endl;
}

// Function to display personalized greeting
void greetPerson(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// Function that returns a greeting message
string getGreeting(string name) {
    return "Greetings, " + name + "!";
}

int main() {
    sayHello();
    
    string userName;
    cout << "Enter your name: ";
    getline(cin, userName);
    
}

