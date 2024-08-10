#include <iostream>
#include <string>


int main() {
  // variable to get the number from the user--- 2/2
  int number {};


  std::cout << "Enter the number : " << std::endl;
  std::cin >> number;

  // if statement--------
  // check if the number is even or odd and print the message--- 3/3
  
  // if (number % 2 == 0) {
  //   std::cout << "Number is even" << std::endl;
  // }
  // else {
  //   std::cout << "Number is odd" << std::endl;
  // }

  // ternary condition-----
  std::string result = (number % 2 == 0) ? "Number is even" : "Number is odd";
  std::cout << result << std::endl;

  return 0;
}
// great work 😎 9/10 ⭐
