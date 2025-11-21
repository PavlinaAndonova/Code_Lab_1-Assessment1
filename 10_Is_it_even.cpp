#include <iostream> // Include iostream for input/output
#include <string>   // Include string for using string type
using namespace std;    // Using standard namespace

// Function to check if number is even or odd
string checkEvenOdd(int num) {  // Function definition
    if (num % 2 == 0) { // Check if number is even
        return "The provided number is even";   // Return message for even number
    } else {              // Else case for odd number
        return "The provided number is odd";    // Return message for odd number
    }   
}

int main() { // Main function
    int number; // Variable to store user input
    
    // Ask user for input
    cout << "Enter a number: "; // Prompt user
    cin >> number;               // Read user input

    // Call function and output returned message
    string result = checkEvenOdd(number);   // Call function
    cout << result << endl;     // Output result

    return 0;   // Return 0 to indicate successful execution
}
