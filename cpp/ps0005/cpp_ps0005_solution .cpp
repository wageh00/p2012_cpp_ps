

#include<iostream>
using namespace std;
int main()
{
    int x;
    double num1, num2, result;


    cout << "enter the operator \n";


    cout << "1. (+)\n";
    cout << "2. (-)\n";
    cout << "3. (*)\n";
    cout << "4.(/)\n";
    cout << "5. (%)\n";
    cout << "enter the number of proces ";

    cin >> x;

    cout << "enter two numbers:\n ";
    cin >> num1 >> num2;
    switch (x)
    {
    case 1:
        result = num1 + num2;
        cout << "the result is: " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << "the result is: " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << "the result is: " << result << endl;
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << " the result is:" << result << endl;
        }
        else
        {
            cout << "math error" << endl;
        }
        break;
        /* case 5:
             if (num2!=0)
             {
                 result = num1 % num2;
                 cout << "the result is: " << result << endl;
             }
             else
             {
                 cout << "math error" << endl;
             }

          break;
        */

    default:
        cout << "error :cannot found result" << endl;
        break;
    }
    return 0;

}