#include <iostream>

using namespace std;

int main() {
    // prompting user for number 1/1.5
    float a;
    cout << "Enter a number from 32 to 126: ";
    cin >> a;

    // checking invalidaty of user's input 3/4
	// printing the number and the opposite printable character 2/2
    if (a != (int) a) {
        cout << "Invalid: a floating point number!" << endl;
    } else if (a == 0) {
        cout << "Invalid character/s or zero value!" << endl;
    } else if (a < 32 || a > 126) {
        cout << "Invalid: number is out of range!" << endl;
    } else {
        char c = (a);
        cout << "The character for " << a << " is " << c << endl;
    }

    return 0;
}
// good work 👍 7/10
