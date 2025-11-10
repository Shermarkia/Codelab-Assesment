#include <iostream>
using namespace std;

int main() {
    int month, year;
    
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    
    int days;
    
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            days = -1; // Invalid month
    }
    
    if (days != -1) {
        cout << "Number of days: " << days << endl;
    } else {
        cout << "Invalid month!" << endl;
    }
    
    return 0;
}
