#include <iostream>
using namespace std;

int main() {
    char operation; // هو تقريبا الرموز الحسابيه char// مش متاكده 
    float num1, num2, result;
    
    cout << "Enter the arithmetic operation (+, -, *, /, %): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
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
                return 1; // Exit the program
            }
            break;
        case '%':
            if (int(num2)!= 0) {
                result = int(num1) % int(num2);
            } else {
                cout << "Error: Division by zero" ;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operation!"  ;
            return 1; 
    }

   
    cout << "Result: " << result << endl;

    return 0;
}
