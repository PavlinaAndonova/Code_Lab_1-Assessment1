#include <iostream> // Include the iostream library for input and output
using namespace std;    // Use the standard namespace

int main() {    // Main function where execution starts
    int month;  // Variable to store the month number

    cout << "Enter a month number (1-12): ";    // Prompt the user for input
    cin >> month;   // Read the month number from user input    

    switch (month) {    // Switch statement to handle different month numbers
        case 1: // If month is 1
            cout << "January has 31 days." << endl; // Output the number of days in January
            break;  // Break to exit the switch
        case 2: // If month is 2
            cout << "February has 28 or 29 days (leap year)." << endl; // Output the number of days in February
            break;  // Break to exit the switch
        case 3: // If month is 3
            cout << "March has 31 days." << endl;   // Output the number of days in March
            break;  // Break to exit the switch
        case 4: // If month is 4
            cout << "April has 30 days." << endl;   // Output the number of days in April
            break;  // Break to exit the switch
        case 5: // If month is 5
            cout << "May has 31 days." << endl;  // Output the number of days in May
            break;  // Break to exit the switch
        case 6: // If month is 6
            cout << "June has 30 days." << endl;    // Output the number of days in June
            break;      // Break to exit the switch
        case 7: // If month is 7
            cout << "July has 31 days." << endl;    // Output the number of days in July
            break;    // Break to exit the switch
        case 8: // If month is 8
            cout << "August has 31 days." << endl;  // Output the number of days in August
            break;    // Break to exit the switch
        case 9:     // If month is 9
            cout << "September has 30 days." << endl;       // Output the number of days in September
            break;      // Break to exit the switch
        case 10:        // If month is 10
            cout << "October has 31 days." << endl;     // Output the number of days in October
            break;      // Break to exit the switch
        case 11:        // If month is 11
            cout << "November has 30 days." << endl;    // Output the number of days in November
            break;    // Break to exit the switch
        case 12:    // If month is 12
            cout << "December has 31 days." << endl;    // Output the number of days in December
            break;      // Break to exit the switch
        default:    // If month is not between 1 and 12
            cout << "Invalid month number! Please enter a number between 1 and 12." << endl;  // Output an error message
    }

    return 0;   // Return 0 to indicate successful execution
}