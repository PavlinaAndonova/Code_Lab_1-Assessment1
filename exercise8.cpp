#include <iostream> // Include iostream for input/output    
#include <string>   // Include string for using string class
#include <algorithm> // for transform()
using namespace std;    // Use the standard namespace

int main() {    // Main function
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"}; // Array of names
    string search;  // Variable to hold user input
    bool found = false; // Flag to indicate if name is found    

    cout << "Enter a name to search for: "; // Prompt user for input
    getline(cin, search);   // Read the entire line including spaces

    // Convert both input and array items to lowercase for case-insensitive search
    transform(search.begin(), search.end(), search.begin(), ::tolower); // Convert user input to lowercase

    for (int i = 0; i < 6; i++) {   // Loop through the names array
        string lowerName = names[i];    // Copy current name
        transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);    // Convert current name to lowercase

        if (lowerName == search) {  // Compare names
            found = true;   // Set found flag to true
            break;  // Exit loop if found
        }
    }

    if (found) {    // If name was found
        cout << search << " was found in the list!" << endl;    // Output success message
    } else {    // If name was not found
        cout << search << " was NOT found in the list." << endl;    // Output failure message
    }

    return 0;   // End of main function
}
