/* ps0004 - Give me a number! I'll send back a character.
=========================================================
Write a program that takes a number as input and outputs an equivalent ASCII Character.

- If the inputted data is a zero-value, a character, a letter or a text, print
      "Invalid character/s or zero value!" and exit the program RETURNING 1.

- If the inputted data is a floating number, print
      "Invalid: a floating point number!" and exit the program RETURNING 2.

- If the inputted data is a negative or out-of-range number, print
      "Invalid: number is out of the range!" and exit the program RETURNING 3.

- If the inputted data is a number [32:126], print
      "The character for <PRINT_YOUR_NUMBER_HERE> is <PRINT_THE_EQUIVALENT_CHARACTER_HERE>." and exit the program RETURNING 0.
*/

#include <iostream>
#include <cmath>


int main()
{
      // prompting user for the number---------------------------------------
      float inputValue {};
      std::cout << "Enter a number from 32 to 126 : " << std::endl;
      std::cin >> inputValue;

      short int convertedValue = inputValue;

      // checking user input-------------------------------------------

      // check for floating numbers-----
      if(std::floor(inputValue) != inputValue) {
            std::cout << "Invalid: a floating point number!" << std::endl;
            return 0;
      }

      // check for character/s or zero value-----
      if (inputValue == 0) {
            std::cout << "Invalid character/s or zero value!" << std::endl;
            return 0;
      }

      // check on convertedValue after passing float numbers and other values except int--
      if(convertedValue < 32 || convertedValue > 126) {
            std::cout << "Invalid: number is out of the range!" << std::endl;
            return 0;
      }


      // printing the number and the equivalent printable character-------
      std::cout << "The character for " << convertedValue << " is " << static_cast<char>(convertedValue) << std::endl;


      return 0;
}