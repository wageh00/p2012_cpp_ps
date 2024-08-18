#include <iostream>
using namespace std;

int main()
{
    float A;
    cout << "Please enter A ";
    cin >> A;

    float B;
    cout << "Please enter B ";
    cin >> B;

    char op;
    cout << "Please enter an operator ";
    cin >> op;

    if (op == '+')
        cout << "A + B = " << A + B << endl;
    else if (op == '-')
        cout << "A - B = " << A - B << endl;
    else if (op == '*')
        cout << "A * B = " << A * B << endl;
    else if (op == '/')
    {
        if (B != 0)
            cout << "A / B = " << A / B << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
    else if (op == '%')
    {

        if (B != 0 && A == (int)A && B == (int)B)
            cout << "A % B = " << (int)A % (int)B << endl;
        else
            cout << " A and B must be integers for modulus operation, and B must not be zero." << endl;
    }
    else
        cout << "Invalid operator!" << endl;

    return 0;
}
