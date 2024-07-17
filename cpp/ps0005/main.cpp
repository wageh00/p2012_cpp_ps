#include <iostream>
#include <stdexcept>

int main() {
    // prompting user for 2 operands and an operator 2/2
    double num1, num2;
    char op;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /, %): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // checking user inputs and processing 3/4
    try {
        double result;
        switch (op) {
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
                if (num2 == 0) throw std::runtime_error("Division by zero is not allowed.");
                result = num1 / num2;
                break; // 0.5/1
            case '%':
                int test1 = static_cast<int>(num1), test2 = static_cast<int>(num2);
                if (num2 == 0) throw std::runtime_error("Division by zero is not allowed.");
                if (num1 == test1 && num2 == test2) result = test1 % test2;
                else std::cout << "cannot execute modulo operation for floating point numbers." << std::endl;
                break; // 0.5/1
            default:
                throw std::invalid_argument("Invalid operator."); // 1/1
        } // 1/1

        // printing the result if all data is valid 1/1
        std::cout << "Result: " << result << std::endl;
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
// great work 😎 9/10 ⭐
