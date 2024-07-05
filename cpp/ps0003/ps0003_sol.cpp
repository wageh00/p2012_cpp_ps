#include <iostream>

int main()
{
    // prompting user for number 2/2
    int x;
    std::cin >> x;

    // checking if the number is odd or even 3/3
    std::cout << "Number is ";
    if(x % 2 == 0)
        std::cout << "even";
    else
        std::cout << "odd";
    std::cout << std::endl;
    
    return 0;
}
// great work 😎 9/10

// Note: u can use ternary operator
// std::cout << "Number is " << ((x % 2 == 0) ? "even" : "odd") << std::endl
