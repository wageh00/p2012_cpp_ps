#include <iostream>
#include <string>

using namespace std;

bool isNumber(string s);
bool isFloat(string num);

int main()
{
    // prompting user for number 1.5/1.5
    string input;
    cout << "Enter a number from 32 to 126: ";
    cin >> input;

    // checking invalidaty of user's input 4/4
    // printing the number and the opposite printable character 2/2
    if (!isNumber(input) || input=="0") {
        cout << "Invalid character/s or zero value! \n";
    }
    else {
        if (isFloat(input)) {
            cout << "Invalid: a floating point number! \n";
        }
        else {
            int intNumber = stoi(input);
            if (intNumber >= 32 && intNumber <= 126) {

                cout << "The character for " << intNumber << " is " << char(intNumber) << ".";
            }
            else {
                cout << "Invalid: number is out of the range! \n";
            }
        }
    }    
}
// great work 😎 8.5/10 ⭐

bool isNumber(string s)
{
    for (char c : s) {
        if (s.length() > 1 && c == '-') {
            continue;
        }
        if (c == '.') {
            continue;
        }
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool isFloat(string num) {
    for (char c : num) {
        if (c == '.') {
            return true;
        }
    }
    return false;
}
