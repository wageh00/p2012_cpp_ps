#include <iostream>
using namespace std;

int main()
{
    // prompting user for number 1.5/1.5
    double num;
    char x;
    int y;
    cout << "enter number from 32 to 126\n";
    cin >> num;
    int point = num;
    char ascii = num;

    // checking invalidaty of user's input 3/4
	// printing the number and the opposite printable character 2/2
    if (num == 0)
    {
        cout << "Invalid character/s or zero value.\n";
    }
    else if (num != point)
    {
        cout << "Invalid: a floating point number.\n";
    }

    else if (num < 32 || num > 126)
    {
        cout << "Invalid: number is out of the range.\n";
    }
    else
    {
        cout << "the character for  " << num << " is " << ascii << endl;
    }
    
    return 0;
}
// good work 👍 7.5/10
