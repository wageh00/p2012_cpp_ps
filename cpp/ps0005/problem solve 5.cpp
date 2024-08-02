#include <iostream>
using namespace std;
int main() {
    // prompting user for 2 operands and an operator 2/2
    float num1, num2;
    char operation;
    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter operation (+, -, *, /, % , ^):\n";
    cin >> operation;
    cout << "Enter second number:\n";
    cin >> num2;

    // checking user inputs and processing 4/4
    double result;
    switch(operation) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Math eror cannot divide by zero \n" ;
                return 1;
            } // 1/1
            break;
        
        case '%':
            if ((num1 == (int)num1) && (num2 == (int)num2)) {
            result = (int)num1 % (int)num2;
            } else {
                cout << "Cannot execute modulo operation on floating numbers\n";
                return 1;
            } // 1/1
            break;
        
        default:
            cout << "Invalid operation!\n";
            return 1; // 1/1
    } // 1/1

    // printing the result if all data is valid 1/1
    cout << "Result: " << result ;
    return 0;
}
// great work 😎 10/10 ⭐
