#include <iostream>

using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 2/2
    float num1, num2;
    char op;
    cout << "please enter number1\n";
    cin >> num1;
    cout << "please enter the operator type +, -, *, /, %\n";
    cin >> op;
    cout << "please enter number2\n";
    cin >> num2;

    // checking user inputs and processing 1.5/4
    // printing the result if all data is valid 0.5/1
    switch (op){
        case '-':
            cout << "the result = \t" << num1 - num2 << "\n";
            break;
        case '+':
            cout << "the result = \t" << num1 + num2 << "\n";
            break;
        case '*':
            cout << "the result = \t" << num1 * num2 << "\n";
            break;
        
        case '/':
        {
            if(num2 == 0 && num1 == 0)
                cout << "undefined quantity" << endl;
            else if(num2 == 0 && num1 != 0)
                cout << "math error" << endl;
            else
                cout << "the result = \t" << num1 / num2 << "\n";
        } // 0/1
        break;
        
        case '%':
        {
            if(num1 != (int)num1 && num2 != (int)num2)
                cout << "cannot execute this modulo operation for the floating-point numbers" << endl
            else
                cout << "the result = \t" << (int)num1 % (int)num2 << "\n";
        } // 0/1
        break;
        
        default:
            cout<< "Invalid character for operator \n"; // 0.5/1
    } // 1/1

    return 0;
}
// good work 👍 6/10
