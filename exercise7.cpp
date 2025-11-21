#include <iostream> // Include the iostream library for input and output
using namespace std;    // Use the standard namespace

int main() {    // Main function where execution begins
    // Count up from 0 to 50 in increments of 1
    cout << "Counting up from 0 to 50 (increments of 1):" << endl; // Print the description
    for (int i = 0; i <= 50; i++) { // Loop from 0 to 50
        cout << i << " ";   // Print the current number followed by a space
    }
    cout << "\n" << endl;   // Print a newline for better readability

    // Count down from 50 to 0 in decrements of 1
    cout << "Counting down from 50 to 0 (decrements of 1):" << endl;    // Print the description
    for (int i = 50; i >= 0; i--) { // Loop from 50 down to 0
        cout << i << " ";   // Print the current number followed by a space
    }
    cout << "\n" << endl;   // Print a newline for better readability

    // Count up from 30 to 50 in increments of 1
    cout << "Counting up from 30 to 50 (increments of 1):" << endl;  // Print the description
    for (int i = 30; i <= 50; i++) {    // Loop from 30 to 50
        cout << i << " ";   // Print the current number followed by a space
    }   
    cout << "\n" << endl;   // Print a newline for better readability

    // Count down from 50 to 10 in decrements of 2
    cout << "Counting down from 50 to 10 (decrements of 2):" << endl;   // Print the description
    for (int i = 50; i >= 10; i -= 2) { // Loop from 50 down to 10 in steps of 2
        cout << i << " ";   // Print the current number followed by a space
    }
    cout << "\n" << endl;   // Print a newline for better readability

    // Count up from 100 to 200 in increments of 5
    cout << "Counting up from 100 to 200 (increments of 5):" << endl;   // Print the description
    for (int i = 100; i <= 200; i += 5) {   // Loop from 100 to 200 in steps of 5
        cout << i << " ";   // Print the current number followed by a space
    }
    cout << "\n" << endl;   // Print a newline for better readability

    return 0;   // Indicate that the program ended successfully
}
