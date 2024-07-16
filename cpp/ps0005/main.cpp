#include <iostream>

using namespace std;

#include <stdexcept>

int main() {
    double num1, num2;
    char op;

    // ﬁ—«¡… «·„œŒ·«  „‰ «·„” Œœ„
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /, %): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    try {
        //  ‰›Ì– «·⁄„·Ì… «·Õ”«»Ì…
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
                break;
            case '%':
                if (static_cast<int>(num2) == 0) throw std::runtime_error("Division by zero is not allowed.");
                result = static_cast<int>(num1) % static_cast<int>(num2);
                break;
            default:
                throw std::invalid_argument("Invalid operator.");
        }

        // ⁄—÷ «·‰ ÌÃ…
        std::cout << "Result: " << result << std::endl;
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
