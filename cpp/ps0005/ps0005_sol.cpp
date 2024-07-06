#include <iostream>

using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 1.5/2
    double num1, num2;
    char op;
    double res;
    cout << "Enter the two operands:\n";
    cin >> num1 >> num2;
    cout << "Enter an operator from these (+ - * / %): \n";
    cin >> op;

    // checking user inputs and processing 2.5/4
    // printing the result if all data is valid 1/1
    switch (op)
    {
        case '+':
        {
            res = num1 + num2;
            cout << "(" << num1 << ") " << "+" << " (" << num2 << ") " << "= " << res;
        }
        break;
        
        case '-':
        {
            res = num1 - num2;
            cout << "(" << num1 << ") " << "-" << " (" << num2 << ") " << "= " << res;
        }
        break;

        case '*':
        {
            res = num1 * num2;
            cout << "(" << num1 << ") " << "*" << " (" << num2 << ") " << "= " << res;
        }
        break;

        case '%':
        {
            if ((num1 != (int) num1) || (num2 != (int) num2))
            {
                cout << "cannot execute modulo operation for floating point numbers.";
            }
            else
            {
                res = ((int) num1) % ((int) num2);
                cout << "(" << num1 << ") " << "%" << " (" << num2 << ") " << "= " << res;
            } // 0/1
        }
        break;
        
        case '/':
        {
            if (num1 == 0 && num2 == 0)
            {
                cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity.\n";
            }
            else if (num2 == 0)
            {
                cout << "Can't divide by zero \n";
            }
            else
            {
                res = num1 / num2;
                cout << "(" << num1 << ") " << "/" << " (" << num2 << ") " << "= " << res;
            } // 1/1
        }
        break;
        
        default:
            cout << " ERROR.\n"; // 1/1
    } // 0.5/1

    return 0;
}
// good work 👍 7/10
