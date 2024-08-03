#include <iostream>
using namespace std;

int main() {
    // prompting user for 2 operands and an operator 2/2
    char operation; // هو تقريبا الرموز الحسابيه char// مش متاكده 
    float num1, num2, result;
    
    cout << "Enter the arithmetic operation (+, -, *, /, %): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // checking user inputs and processing 3/4
    switch (operation) {
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
                cout << "Error: Division by zero" ;
                return 2; // Exit the program
            } // 1/1
            break;
        case '%':
            if (int(num2)!= 0) {
                if (int(num1) == num1 && int(num2) == num2))
                    result = int(num1) % int(num2);
                else
                {
                    cout << "cannot execute modulo operation for floating point numbers." << endl;
                    return 4;
                }
            } else {
                cout << "Error: Division by zero" ;
                return 2; 
            } // 0.5/1
            break;
        default:
            cout << "Invalid operation!"  ;
            return 1; // 1/1 
    } // 0.5/1

    // printing the result if all data is valid 1/1
    cout << "Result: " << result << endl;

    return 0;
}
// great work 😎 8/10 ⭐
