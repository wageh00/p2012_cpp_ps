
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


#include<iostream>

int main() {

  



    int number;

    std::cin >> number;

    if (number%2==0)
    {
        std::cout<<"Number is even"<< std::endl;

    }
    else
    {
        std::cout<<"Number is odd"<< std::endl;
    }


    return 0;
}
