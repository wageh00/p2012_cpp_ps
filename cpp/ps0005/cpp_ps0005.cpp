/* ps0005 - very simple calculator.
=========================================================
Write a program that takes 2 numbers as operands and a character + - * / % as an operator and outputs the result.

- If the inputted data is a valid, print
      "(<PRINT_FIRST_OPERAND_HERE>) <PRINT_OPERATOR_HERE> (<PRINT_SECOND_OPERAND_HERE>) = <PRINT_RESULT_HERE>" and exit the program RETURNING 0.

- If the inputted operator is not one of these + - * / %, print
      "Invalid character for operator." and exit the program RETURNING 1.

- If the inputted operator is division / and the second operand (divisor) is 0, print
      "Math Error: cannot divide by 0." and exit the program RETURNING 2.

- If the inputted operator is division / and the 2 operands are 0s, print
      "Infinite number of solutions: (0 / 0) is Undefined Quantity." and exit the program RETURNING 3.

- If the inputted operator is modulo % and at least one of the 2 operands is not integer, print
      "cannot execute modulo operation for floating point numbers." and exit the program RETURNING 4.
*/

#include <iostream>
#include <string>
#include <cmath>




int main()
{
      // prompting user for the 2 operands and an operator
      double num1, num2, result;
      char op;

      std::cout << "Enter the two operands :" << std::endl;
      std::cin >> num1 >> num2;

      std::cout << "Enter the operator + - * / % :" << std::endl;
      std::cin >> op;

      // checking user inputs and processing------------
      if(!num1 && !num2) {
            std::cout << "Invalid character/s or zero valueInfinite number of solutions: (0 / 0) is Undefined Quantity!" << std::endl;
            return 0;
      }

      switch (op)
      {
      case '+':
            result = num1 + num2;
            break;

      case '-':
            result = num1 - num2;
            break;

      case '*':
            result = num1 * num2;
            break;

      case '/':
            if(!num2) {
                  std::cout << "Math Error: cannot divide by 0." << std::endl;
                  return 0;
            }
            result = num1 / num2;
            break;

      case '%':
            if(std::floor(num1) != num1 || std::floor(num2) != num2) {
                  std::cout << "cannot execute modulo operation for floating point numbers." << std::endl;
                  return 0;
            }
            result = static_cast<int>(num1) % static_cast<int>(num2);
            break;
      
      default:
            std::cout << "Invalid character for operator." << std::endl;
            return 0;
            break;
      }

      // printing the result if all data is valid
      std::cout << "(" << num1 << ") " << op << " (" << num2 << ")" << " = " << result << std::endl;


      return 0;
}