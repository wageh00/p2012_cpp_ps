#include <iostream>

using namespace std;

int main() {
    int number;

    // Ask the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl; // Even
    } else {
        std::cout << number << " is odd." << std::endl;  // Odd
    }

    return 0;
}


