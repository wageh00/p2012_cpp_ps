#include <iostream>

int main()
{

    float x,y,w;
    char z;

    std::cout << "Enter the two operands:" << std::endl;
    std::cin >> x;
    std::cin >> y;

     int a{x},b{y};

    std::cout << "Enter the operator + - * / %:" << std::endl;
    std::cin >> z;


    if(!(z=='+' || z=='-' || z=='*' || z=='/' || z=='%'))
      std::cout << "Invalid character for operator." << std::endl;


      else
            if(z == '%' && (x != a || y != b)){
                std::cout << "Cannot execute modulo operation for floating point numbers." << std::endl;
            }
            else{

        switch(z)
        {
        case '+' : w=x+y;
        break;
        case '-' : w=x-y;
        break;
        case '*' : w=x*y;
        break;
        case '/' : if(x==0&&y==0) std::cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity." << std::endl;
        else if(y==0) std::cout << "Math Error: cannot divide by 0." << std::endl;
        else w=x/y;
        break;
        case '%' : w=a%b;
        break;
        }
        std::cout << "(" << x << ") " << z << " (" << y << ") = " << w << std::endl;
      }


    return 0;
}
