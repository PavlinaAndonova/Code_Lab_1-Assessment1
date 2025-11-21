#include <iostream> // Include the iostream library for input and output
#include <string> // Include the string library for string manipulation
#include <cctype> // Include cctype for character handling functions
using namespace std; // Use the standard namespace

int main() {    // Main function - execution starts here
    string name;    // Variable to store user's name
    string hometown;    // Variable to store user's hometown
    string ageInput;    // Temporary variable to store age input as string
    int age;    // Variable to store user's age

    // Ask the user for their name, hometown, and age with validation
    cout << "What is your full name?: ";    // Prompt for name
    getline(cin, name); //Allow spaces in name

    // --- Get hometown ---
    cout << "Enter your hometown: "; // Prompt for hometown 
    getline(cin, hometown); //Allow spaces in hometown

    // --- Get age ---
    cout << "Enter your age: "; // Prompt for age
    getline(cin, ageInput); // get age input as string

    while (true) {  // Loop until valid age is entered
        try {   // Try to convert input to integer
            age = stoi(ageInput);   // Convert string to integer
            if (age < 0) {  // Check for negative age
                throw invalid_argument("negative"); // Throw exception for negative age
            }   // If conversion is successful and age is non-negative, exit loop
            break;  // Exit loop if age is valid
        } catch (...) { // Catch any exception  
            cout << "Invalid age. Please enter a valid number: ";   // Prompt for valid age
            getline(cin, ageInput); // Get age input again
        }  
    }

    // --- Print results (only one cout) ---
    cout << "\nName: " << name  // Print name
         << "\nHometown: " << hometown  // Print hometown
         << "\nAge: " << age << endl;   // Print age
    
    return 0;   // Indicate that the program ended successfully
}