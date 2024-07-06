#include <iostream>
int main()
{
    // prompting user for number 1/1.5
    float x; // 0/0.5
    std::cout << "Enter a number from 32 to 126: ";
    std::cin >> x; // 1/1

    // checking invalidaty of user's input 3/4
    if (x==0)
    {
        std::cout << "Invalid character/s or zero value!" << std::endl; // 1/1
        return 1;
    }
    
    if((int) x != x)
    {
        std::cout << "Invalid: a floating point number!" << std::endl; // 0/1
        return 2;
    }
    
    if(x>126 || x<32)
    {
        std::cout << "Invalid: number is out of the range!" << std::endl; // 1/1
        return 3;
    }

    // print the character 2/2
    std::cout << "The character for " << x << " is " << (char) x /* 1/1 */ << "." << std::endl; // 1/1
    return 0;
}
// good work 👍 7.5/10
