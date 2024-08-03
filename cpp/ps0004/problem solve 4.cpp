#include <iostream>
using namespace std;
int main()
{
    // prompting user for number 1.5/1.5
    float num;
    cout << "Enter a number from 32 to 126:\n";
    cin >> num;

    // checking invalidaty of user's input 4/4
    // print the character 2/2
    if (num!=(int)num) {
        cout << "Invalid a floating point number\n";
    }
    else if ((num >= 32) && (num <=126)) {
        char asciiChar = (char) num;
        cout << "The character for " << num << " is: " << asciiChar ;
    }
    else if (num==0) {
        cout << "Invalid character/s or zero value\n";
    }
    else {
        cout << "Invalid number is out of the range\n";
    }
    
    return 0;
}
// great work 😎 8.5/10 ⭐
