#include <iostream>
using namespace std;
int main()
{
    // prompting user for 2 operands and an operator 1.5/2
    double num1;
    double num2;
    char op;
    double res;
    
    cout << "enter the two operands \n";
    cin >> num1 >> num2;
    
    cout << "enter your operator + - * / % \n";
    cin >> op;

    // checking user inputs and processing 2/4
    // printing the result if all data is valid 1/1
    switch(op)
    { 
        case '+' :
            cout << "res=" << num1 - num2 << "\n";
            break ;
        
        case '-' :
            cout << "res=" << num1 - num2 << "\n";
            break;
          
        case '*' :
            cout << "res=" << num1 * num2 << "\n";
            break;
         
        case '/' :
        {
          if (num1==0 && num2==0)
              cout << "infinite number of solutions:(0/0) is undefined Quantity \n";
          else if (num2==0)
              cout << "Math eror: cannot divide by 0 \n";
          else
              cout << "res=" << num1 / num2 << "\n";
        } // 1/1
        break;
          
        case '%' :
        {
            int test1 = num1, test2 = num2;
            if (num1 == test1 && num2 == test2)
                cout << "res=" << test1 % test2 << "\n";
            else
                cout << "Cannot execute modulo operation for floating point numbers.\n";
        } // 0.5/1
        break;
        
        default:
            cout << "Invalid character for operator.\n"; // 0/1
    } // 0.5/1
    
    return 0;
}
// good work 👍 6/10
