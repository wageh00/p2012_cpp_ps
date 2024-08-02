#include <iostream>
using namespace std;
int main() { 
    int num1, num2;
    char operation;
    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter operation (+, -, *, /, % , ^):\n";
    cin >> operation;
    cout << "Enter second number:\n";
    cin >> num2;

    int result;
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
            }else {
                cout << "Math eror cannot divide by zero \n" ;
                return 1;
            }
            break;
        case '%':
            result = num1 % num2;
            break;
        case '^':
            result = num1 ^ num2;
            cout << "invalid character for operator \n";
               return 1;
            break;
        default:
            cout << "Invalid operation!\n";
               return 1;
    }

    cout << "Result: " << result ;
    return 0;
}
