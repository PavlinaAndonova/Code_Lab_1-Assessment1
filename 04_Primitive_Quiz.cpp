#include <iostream> // Include the iostream library for input and output
#include <string>   // Include the string library for string manipulation
#include <algorithm> // for transform()
using namespace std;    // Use the standard namespace

int main() {    // Main function - execution starts here
    string answer;  // variable to store user's answer

    cout << "What is the capital of France? ";  // ask the user a question
    getline(cin, answer);   // allow spaces in case user types something like "  Paris  "

    // convert answer to lowercase
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower); // make the answer case-insensitive

    if (answer == "paris") {    // check if the answer is correct
        cout << "Correct! ✅" << endl;  // display success message
    } else {    // if the answer is incorrect
        cout << "Wrong answer. ❌ The correct answer is Paris." << endl;    // display failure message
    }

    return 0;   // Indicate that the program ended successfully
}