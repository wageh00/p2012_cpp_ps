#include <iostream>

using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 1.5/2
    float num1, num2, result;
    char op;

    cout << "Enter the two operands : \n";
    cin >> num1 >> num2;

    cout << "Enter the two operator + - * / % : \n";
    cin >> op;

    // checking user inputs and processing 3/4
    // printing the result if all data is valid 1/1
    if(op == '+' || op == '-'  || op == '*' || op == '/' || op == '%')
    {
        
        if(op == '+')
        {
          result = num1 + num2;
          cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << result << "\n";
        }
        
        else if(op == '-')
        {
          result = num1 - num2;
          cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << result << "\n";
        }
        
        else if(op == '*')
        {
          result = num1 * num2;
          cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << result << "\n";
        }
        
        else if(op == '/')
        {
            if(num1 != 0 && num2 == 0)
            {
              cout << "Math Error : cannot divide by 0.\n ";
            }
            else if(num1 == 0 && num2 == 0)
            {
              cout << "Infinite number of solutions : ( 0 / 0 ) is Undefined Quantity.\n ";
            }
            else
            {
              result = num1 / num2;
              cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << result << "\n";
            }
        } // 1/1
        
        else if(op == '%')
        {
            if(num1 != (int)num1 || num2 != (int)num2)
            {
              cout << "Cannot execute modulo operation for floating point numbers.\n";
            }
            else
            {
              result = (int)num1 % (int)num2;
              cout << " ( " << num1 << " ) " << op << " ( " << num2 << " ) " << " = " << result << "\n";
            }
        } // 0/1
    }
    else
    {
      cout<<" Invalid character for operator .  \n ";
    } // 1/1
    // 1/1
    
    return 0;
}
// good work 👍 6.5/10
