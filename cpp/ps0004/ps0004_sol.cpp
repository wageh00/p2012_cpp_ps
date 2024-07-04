#include <iostream>
int main()
{
    int x;
    std::cout << "Enter a number from 32 to 126:";
    std::cin >> x;

    if (x==0)
        std::cout << "Invalid character/s or zero value!" << std::endl;
    else if(!(x%1==0))
        std::cout << "Invalid: a floating point number!" << std::endl;
    else if(x>126 || x<32)
        std::cout << "Invalid: number is out of the range!" << std::endl;
        else if(!(x>32 && x<126))
            std::cout << "Invalid character/s or zero value!" << std::endl;
    else{
        char y{x};
        std::cout << "The character for " << x << " is " << y << "." << std::endl;
    }

    return 0;
}
