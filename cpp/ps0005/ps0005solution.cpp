
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the two operands : \n";
    int op1, op2;
    cin >> op1 >> op2;

    cout << "Enter the operator + - * / %: \n ";
    char ch;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "(" << op1 << ")" << " + " << "(" << op2 << ")" << " = " << op1 + op2;
        break;

    case '-':
        cout << "(" << op1 << ")" << " - " << "(" << op2 << ")" << " = " << op1 - op2;
        break;

    case '*':
        cout <<"(" <<op1 <<")" <<" * " << "(" << op2 << ")" << " = " << op1 * op2;
        break;

    case '/':
        if (op2 > 0)
            cout << "(" << op1 << ")" << " / " << "(" << op2 << ")" << " = " << op1 / op2;
        else
            cout << "Math error : cannot divide by 0 \n";
        break;

    case '%':
        cout <<"(" <<op1 <<")" << " % " <<"(" <<op2 <<")" << " = " << op1 % op2;
        break;

    default :
        cout << "Invalid character for operator." <<endl;
    }
    
    
   
    return 0;
}

