#include <iostream>
using namespace std;



int main()

{
    double num1;
        
    double    num2;
    char op;



    cout << "Enter the two operands:" <<endl;

    if (!(cin >> num1)) 
    {
        cout << "Error: Invalid input for first operand." <<endl;
        return 1;
    }

    if (!(cin >> num2)) 
    {
        cout << "Error: Invalid input for second operand." <<endl;
        return 1;
    }

    cout << "Enter the operator + - * / %:" <<endl;
    cin >> op;

    if (op == '+') 
    {
        cout << "(" << num1 << ") + (" << num2 << ") = " << num1 + num2 << "" <<endl;
    }


    else if (op == '-') 
    {
        cout << "(" << num1 << ") - (" << num2 << ") = " << num1 - num2 << "" <<endl;
    }


    else if (op == '*') 
    {
        cout << "(" << num1 << ") * (" << num2 << ") = " << num1 * num2 << "" <<endl;
    }


    else if (op == '/') 
    {
        if (num2 == 0)
        {
            if (num1 == 0)
            {
                cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity." <<endl;
            }
            else {
                cout << "Math Error: cannot divide by 0." <<endl;
            }
        }
        else {
            cout << "(" << num1 << ") / (" << num2 << ") = " << num1 / num2 << "" <<endl;
        }
    }

    else if (op == '%')
    {
        if (floor(num1) != num1 || floor(num2) != num2)
        {
            cout << "cannot execute modulo operation for floating point numbers." <<endl;
        }
        else if (num2 == 0)
        {
            cout << "Math Error: cannot perform modulo with 0." <<endl;
        }
        else {
            int result = static_cast<int>(num1) % static_cast<int>(num2);
            cout << "(" << static_cast<int>(num1) << ") % (" << static_cast<int>(num2) << ") = " << result << "" <<endl;
        }

    }

    else 
    {
        cout << "Invalid character for operator." <<endl;
    }

    return 0;
}