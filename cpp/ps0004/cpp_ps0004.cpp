#include <iostream>
#include <cmath>


int main()
{
      // prompting user for the number--------------------------------------- 1.5/1.5
      float inputValue {};
      std::cout << "Enter a number from 32 to 126 : " << std::endl;
      std::cin >> inputValue;

      short int convertedValue = inputValue;

      // checking user input------------------------------------------- 3/4      

      // check for character/s or zero value-----
      if (inputValue == 0) {
            std::cout << "Invalid character/s or zero value!" << std::endl;
            return 1;
      }

      // check for floating numbers-----
      if(convertedValue != inputValue) {
            std::cout << "Invalid: a floating point number!" << std::endl;
            return 2;
      }
      
      // check on convertedValue after passing float numbers and other values except int--
      if(convertedValue < 32 || convertedValue > 126) {
            std::cout << "Invalid: number is out of the range!" << std::endl;
            return 3;
      }

      // printing the number and the equivalent printable character------- 2/2
      std::cout << "The character for " << convertedValue << " is " << static_cast<char>(convertedValue) << std::endl;

      return 0;
}
// great work 😎 8.5/10 ⭐
