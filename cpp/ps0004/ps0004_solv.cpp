#include <iostream>

using namespace std;

int main()
{
    // prompting user for number 1/1.5
    float num;
    cout << "\nPlease enter a number between 32 and 126:\t";
    cin >> num;

    // checking invalidaty of user's input 2/4
    // printing the number and the opposite printable character 2/2
    if(num == 0)
        cout << "Invalid character/s or Zero value!\n\n";
    else if(num != (int)num)
        cout << "Invalid: a floating point number!\n";
    else if(num < 32 || num > 126)
        cout << "Invalid : number is out of the range!\n\n";
    else
        cout << "The character for " << num << " is " << char(num) << " .\n\n";
    
    return 0;
}
// good work 👍 6/10
