#include <iostream>

using namespace std;

#include <string>

int main() {
    std::string input;
    std::cout << "Enter a value: ";
    std::cin >> input;

    // Check if the input is a single character
    if (input.length() == 1) {
        char c = input[0];
        if (c >= 32 && c <= 126) {
            std::cout << "The character for " << static_cast<int>(c) << " is " << c << "." << std::endl;
        } else {
            std::cout << "Invalid: number is out of the range." << std::endl;
        }
    } else {
        // Check if the input is a valid integer
        try {
            int num = std::stoi(input);
            if (num >= 32 && num <= 126) {
                std::cout << "The character for " << num << " is " << static_cast<char>(num) << "." << std::endl;
            } else {
                std::cout << "Invalid: number is out of the range." << std::endl;
            }
        } catch (std::invalid_argument const &e) {
            std::cout << "Invalid: not a valid number." << std::endl;
        } catch (std::out_of_range const &e) {
            std::cout << "Invalid: number is out of the range." << std::endl;
        }
    }

    return 0;
}

