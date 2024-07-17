#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a value: ";
    std::cin >> input;

    // Check if the input is a single character +0.5
    if (input.length() == 1) {
        char c = input[0];
        if (c >= 32 && c <= 126) {
            std::cout << "The character for " << static_cast<int>(c) << " is " << c << "." << std::endl;
        } else {
            std::cout << "Invalid: number is out of the range." << std::endl;
        }
    } else {
        // Check if the input is a valid integer 1/1.5
        try {
            int num = std::stoi(input);
            float floating = std::stof(input);
            if (num >= 32 && num <= 126 && num == floating) {
                // printing the number and the opposite printable character 2/2
                std::cout << "The character for " << num << " is " << static_cast<char>(num) << "." << std::endl;
            } else {
                if (num != floating)
                    std::cout << "Invalid: a floating point number!" << std::endl;
                else
                    std::cout << "Invalid: number is out of the range." << std::endl;
            }
        // checking invalidaty of user's input 3/4
        } catch (std::invalid_argument const &e) {
            std::cout << "Invalid: not a valid number." << std::endl;
        } catch (std::out_of_range const &e) {
            std::cout << "Invalid: number is out of the range." << std::endl;
        }
    }

    return 0;
}
// great work 😎 8.5/10 ⭐
