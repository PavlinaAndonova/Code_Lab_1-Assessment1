#include <iostream> // Include the iostream library for input and output
#include <string> // Include the string library for string manipulation
using namespace std;    // Use the standard namespace

int main() {    // Main function - execution starts here
    const string CORRECT = "12345"; // Define the correct password
    const int MAX_ATTEMPTS = 5;     // Maximum number of allowed attempts

    string attempt; // Variable to store user input
    int tries = 0;  // Counter for the number of attempts

    while (tries < MAX_ATTEMPTS) {  // Loop until maximum attempts reached
        cout << "Enter password: "; // Prompt user for password
        getline(cin, attempt);      // Read the entire line of input

        if (attempt == CORRECT) {   // Check if the password is correct
            cout << "Welcome to the Secure Area" << endl;   // Successful login message
            return 0; // success, exit program     // Indicate that the program ended successfully
        }

        tries++;    // Increment the attempt counter
        int remain = MAX_ATTEMPTS - tries;  // Calculate remaining attempts

        if (remain > 0) {   // If there are remaining attempts
            cout << "Wrong password. You have " << remain   // Display remaining attempts
                 << (remain == 1 ? " attempt" : " attempts") << " remaining." << endl;  // Singular/plural handling
        } else {    // No remaining attempts
            cout << "5 failed attempts. Authorities have been alerted!" << endl;    // Alert message
        }
    }

    return 0;   // Indicate that the program ended successfully
}
