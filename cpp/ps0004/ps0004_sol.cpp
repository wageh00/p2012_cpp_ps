#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a number from 32 to 126: ";
    cin >> a;
    if (a % 1 != 0) {
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
