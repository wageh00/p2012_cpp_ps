#include <iostream>
using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 1.5/2
    cout << "Enter the two operands : \n";
    double op1, op2;
    cin >> op1 >> op2;

    cout << "Enter the operator + - * / %: \n";
    char ch;
    cin >> ch;

    // checking user inputs and processing 2/4
    // printing the result if all data is valid 1/1
    switch (ch)
    {
        case '+':
            cout << "(" << op1 << ")" << " + " << "(" << op2 << ")" << " = " << op1 + op2;
            break;
    
        case '-':
            cout << "(" << op1 << ")" << " - " << "(" << op2 << ")" << " = " << op1 - op2;
            break;
    
        case '*':
            cout << "(" << op1 << ")" << " * " << "(" << op2 << ")" << " = " << op1 * op2;
            break;
    
        case '/':
        {
            if (op2 != 0)
                cout << "(" << op1 << ")" << " / " << "(" << op2 << ")" << " = " << op1 / op2;
            else
            {
                if (op1 != 0)
                    cout << "Math error : cannot divide by 0 \n";
                else
                    cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity.\n";
            }
        } // 0.5/1
        break;
    
        case '%':
        {
            if (((int) op1 == op1) && ((int) op2 == op2))
                cout << "(" << op1 << ")" << " % " << "(" << op2 << ")" << " = " << op1 % op2;
            else
                cout << "Cannot execute modulo operation for floating point numbers.\n";
        } // 0/1
        break;
    
        default :
            cout << "Invalid character for operator." << endl; // 1/1
    } // 0.5/1
   
    return 0;
}
// good work 👍 6.5/10
