#include <iostream>
using namespace std;

int main() {
    // prompting user for number 1.5/1.5
    float num;
    char ch;

    cout << "Enter a number between 32 and 126: ";
    cin >> num;

    // checking invalidaty of user's input 4/4
    if (num == 0) {
        cout << "Invalid character/s or zero value." << endl;
        return 1;
    }

    int test = num;
    if (num != test) {
        cout << "invalid: a floating point number" << endl;
        return 2;
    }
    
    if (num < 32 || num > 126) {
        cout << "Invalid: number is out of the range." << endl;
        return 3;
    }

    ch = num;
    cout << "The character for ASCII code " << num << " is: " << ch << endl;

    return 0;
}
// great work 😎 9/10 ⭐
