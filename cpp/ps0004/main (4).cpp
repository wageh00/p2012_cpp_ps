#include <iostream>
using namespace std;

int main()
{
    // prompting user for number 1/1.5
    float num;
    cout << "enter your num \n";
    cin >> num;

    // checking invalidaty of user's input 1/4
	// printing the number and the opposite printable character 2/2
    int test = num;
    if (num == 0) {
        std::cout << "Invalid character/s or zero";
    }
    else if ((num - test) != 0)
    {
        std::cout << "Invalid: a floating point number!";
    }
    else if ((num >= 32) && (num <= 126))
    {
        std::cout << "the character for " << num << " is " << char(num) << "\n";
    }
    else if (num > 126 || num < 32)
    {
        std::cout << "invalid:number is out of the range! ";
    }
    
    return 0;
}
// good work 👍 5/10
