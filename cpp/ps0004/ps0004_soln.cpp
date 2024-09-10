#include <iostream>

using namespace std;

int main()
{
    // prompting user for number 1/1.5
    float num;
    cin >> num;

    // checking invalidaty of user's input 2/4
	   // printing the number and the opposite printable character 2/2
    if (num == 0)
    {
       cout << "Invalid character/s or zero value!" << endl;
    }
    else if (num != (int) num) {
       cout << "Invalid: a floating point number!" << endl;
    }
    else if (num>=32 && num<=126)
    {
       char character = (char)num;
       cout << "The character for ASCII value " << num << " is " << character << endl;
    }
    else
    {
       cout << "Invalid: number is out of range!";
    }

    return 0;
}
// good work 👍 6/10
