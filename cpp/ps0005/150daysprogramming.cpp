#include <iostream>
#include <string>

using namespace std;

bool isFloat(string num);

int main()
{
    // prompting user for 2 operands and an operator 2/2
    string st1, st2;
    cout << "Enter the two operands: \n";
    cin >> st1;
    cin >> st2;
    cout << "\n\n Enter the operator + - * / %: \n";
    char op;
    cin >> op;
    cout << endl << endl;
    float num1, num2;
    num1 = stof(st1);
    num2 = stof(st2);

    // checking user inputs and processing 4/4
    // printing the result if all data is valid 1/1
    switch (op) {
        case '+':
            cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 + num2;
            break;
    
        case '-':
            cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 - num2;
            break;
        
        case '*':
            cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 * num2;
            break;
        
        case '/':
            if (num1 == 0 && num2 == 0) {
                cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity.\n";
                break;
            }
            else if (num2 == 0) {
                cout << "Math Error: cannot divide by 0.";
                break;
            }
            else {
                cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 / num2;
                break;
            } // 1/1
        
        case '%':
            if (isFloat(st1) || isFloat(st2)) {
                cout << "cannot execute modulo operation for floating point numbers.\n";
                break;
            }
            else {
                cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << (int)num1 % (int)num2;
                break;
            } // 1/1
            
        default:
            cout << "Invalid character for operator.\n"; // 1/1
    } // 1/1

    return 0;
}
// great work 😎 9.5/10 ⭐

bool isFloat(string num) {
    bool isFloating = false;
    for (char c : num) {
        if (c == '.') {
            isFloating = true;
            break;
        }
    }
    return isFloating;
}
