/* help your brother check if the number is even or odd
    - if the number is even, print "Number is even"
    - if the number is odd, print "Number is odd"
    
    - ex:
      => 909
      <= Number is odd

    - another ex:
      => 20000
      <= Number is odd
*/

#include <iostream>
#include <string>


int main() {
  // variable to get the number from the user---
  int number {};


  std::cout << "Enter the number : " << std::endl;
  std::cin >> number;

  // if statement--------
  // check if the number is even or odd and print the message---
  
  // if (number % 2 == 0) {
  //   std::cout << "Number is even" << std::endl;
  // }
  // else {
  //   std::cout << "Number is odd" << std::endl;
  // }

  // ternary condition-----
  std::string result = (number % 2 == 0) ? "Number is even" : "Number is odd";
  std::cout << result << std::endl;
}