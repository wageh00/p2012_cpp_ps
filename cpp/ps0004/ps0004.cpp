#include <iostream>
using namespace std;

int main() {
    int ascii_code;

    // Prompt the user to enter an ASCII code
    cout << "Enter an ASCII code (between 32 and 126): ";
    cin >> ascii_code;

    // Check if the entered code is within the valid range
    if (ascii_code >= 32 && ascii_code <= 126) {
        char character = static_cast<char>(ascii_code);
        cout << "The character corresponding to ASCII code " << ascii_code << " is: " << character << endl;
    } else {
        cout << "Invalid input. Please enter a code between 32 and 126." << endl;
    }

    return 0;
}