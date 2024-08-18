#include <iostream>
using namespace std;

int main() 

{
    int input;


    cout << "Enter a number: ";


    if (!(cin >> input)) 
    {
        cout << "Invalid character/s or zero value!" << endl;
            }

    if (input >= 32 && input <= 126) 
    {
        cout << "The character for " << input << " is " << static_cast<char>(input) << "." << endl;

    }

    else if (input < 32 || input > 126) 

    {
        cout << "Invalid: number is out of the range!" << endl;
    }

    else if (static_cast<int>(input) != input) 
    {
        cout << "Invalid: a floating point number!" << endl;
    }

    else 
    {
        cout << "Invalid character/s or zero value!" << endl;
    }

}