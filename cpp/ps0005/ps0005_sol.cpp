#include <iostream>

int main()
{
    // prompting user for 2 operands and an operator 2/2
    float x,y,w;
    char z;

    std::cout << "Enter the two operands:" << std::endl;
    std::cin >> x;
    std::cin >> y; // 1/1


    std::cout << "Enter the operator + - * / %:" << std::endl;
    std::cin >> z; // 1/1
    
    // checking user inputs and processing 4/4
    if(!(z=='+' || z=='-' || z=='*' || z=='/' || z=='%'))
        std::cout << "Invalid character for operator." << std::endl; // 1/1
    else
    {
        int a{x},b{y};
        if(z == '%' && (x != a || y != b)){
            std::cout << "Cannot execute modulo operation for floating point numbers." << std::endl; // 1/1
        }
        else
        {
            switch(z)
            {
                case '+' : w=x+y;
                break;
                
                case '-' : w=x-y;
                break;
                
                case '*' : w=x*y;
                break;
                
                case '/' :
                {
                    if(x==0&&y==0)
                        std::cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity." << std::endl;
                    else if(y==0)
                        std::cout << "Math Error: cannot divide by 0." << std::endl;
                    else
                        w=x/y; // 1/1
                }
                break;
                
                case '%' : w=a%b;
                break;
            }

            // printing the result if all data is valid 1/1
            std::cout << "(" << x << ") " << z << " (" << y << ") = " << w << std::endl; // 1/1
        }
    }

    return 0;
}
// great work 😎 9/10 ⭐
