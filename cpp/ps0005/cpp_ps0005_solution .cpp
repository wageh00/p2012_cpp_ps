#include <iostream>
using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 2/2
    int x;
    double num1, num2, result;

    cout << "1. (+)\n";
    cout << "2. (-)\n";
    cout << "3. (*)\n";
    cout << "4. (/)\n";
    cout << "5. (%)\n";
    cout << "enter the number of proces ";
    cin >> x;

    cout << "enter two numbers:\n ";
    cin >> num1 >> num2;

    // checking user inputs and processing 2/4
    // printing the result if all data is valid 1/1
    switch (x)
    {
        case 1:
        {
            result = num1 + num2;
            cout << "the result is: " << result << endl;
        }
        break;
        
        case 2:
        {
            result = num1 - num2;
            cout << "the result is: " << result << endl;
        }
        break;
        
        case 3:
        {
            result = num1 * num2;
            cout << "the result is: " << result << endl;
        }
        break;
        
        case 4:
        {
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << " the result is:" << result << endl;
            }
            else
            {
                if (num1 != 0)
                    cout << "math error" << endl;
                else
                    cout << "undefined quantity" << endl;
            }
        } // 0.5/1
        break;
        
        case 5:
        {
             if ((num1 == (int) num1) && (num2 == (int) num2))
             {
                 result = (int) num1 % (int) num2;
                 cout << "the result is: " << result << endl;
             }
             else
             {
                 cout << "cannot execute this modulo operation for the floating-point numbers" << endl;
             }
        } // 0/1
        break;
    
        default:
            cout << "error :cannot found result" << endl; // 1/1
    } // 0.5/1
    
    return 0;
}
// good work 👍 7.5/10
