#include <iostream>
using namespace std;

int main()
{
    // prompting user for the 2 operands and an operator 2/2
    float num1;
    cout << "Please enter number 1: ";
    cin >> num1;

    float num2;
    cout << "Please enter number 2: ";
    cin >> num2;

    char op;
    cout << "Please enter an operator ";
    cin >> op;

    // checking if the operator is valid 4/4
    if (op == '+')
        cout << num1 << " + "  << num2 << " = " << num1 + num2 << endl;
    else if (op == '-')
        cout << num1 << " - "  << num2 << " = " << num1 - num2 << endl;
    else if (op == '*')
        cout << num1 << " * "  << num2 << " = " << num1 * num2 << endl;
    else if (op == '/')
    {
        if (num2 != 0)
            cout << num1 << " / "  << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    } // 1/1
    else if (op == '%')
    {
        if (num2 != 0 && num1 == (int)num1 && num2 == (int)num2)
            cout << num1 << " % "  << num2 << " = " << (int)num1 % (int)num2 << endl;
        else
            cout << " number 1 and number 2 must be integers for modulus operation, and number 2 must not be zero." << endl;
    } // 1/1
    else
        cout << "Invalid operator!" << endl; // 1/1
    // 1/1
    
    return 0;
}
// great work 😎 9/10 ⭐
