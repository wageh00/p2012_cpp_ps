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
using namespace std;

int main()
{
    // prompting user for the 2 operands and an operator
      int operand_1, operand_2, result;
      cout << "Enter the two operands: \n";
      cin >> operand_1 >> operand_2;
      char op;
      cout << "Enter the operator + - * / %: \n";
      cin>> op;
      // checking if the operator is valid
      switch (op)
      {
            case '+':
                  result = operand_1 + operand_2;
                  break;
            case '-':
                  result = operand_1 - operand_2;
                  break;
            case '*':
                  result = operand_1 * operand_2;
                  break;
            case '/':
                  if(operand_2 != 0)
                        result = operand_1 / operand_2;
                  else
                  {
                        cout << "Can't divide by 0";
                        return 0;
                  }
                  break;  
            case '%':
                  result = operand_1 % operand_2;
                  break;
            default:
                  cout << "Invalid operator";
                  return 0;
                  break;
      }

    // printing the result if all data is valid
      cout << "(" << operand_1 << ") " << op << " (" << operand_2 << ") " << "= " << result;
      return 0;
}