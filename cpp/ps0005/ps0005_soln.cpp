#include <iostream>

using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 1.5/2
    float num_one, num_two;
    int op;
    cout << "type number one\n";
    cin >> num_one;
    cout << "type number two\n";
    cin >> num_two;
    cout << "chose the opreation\n";
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] /\n";
    cout << "[4] *\n";
    cout << "[5] %\n";
    cin >> op;

    // checking user inputs and processing 2/4
    // printing the result if all data is valid 1/1
    if (op == 1)
    {
        cout << num_one << " + " << num_two << " = " << num_one + num_two << "\n";
    }
     else if (op == 2)
    {
        cout << num_one << " - " << num_two << " = " << num_one - num_two << "\n";
    }
    else if (op == 3)
    {
        if (num_one == 0 && num_two == 0)
        {
            cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity." << endl;
        }
        else if (num_two == 0)
        {
            cout << "Math Error: cannot divide by 0." << "\n";
        }
        else
        {
            cout << num_one << " / " << num_two << " = " << num_one / num_two << "\n";
        }
    }
    else if (op == 4)
    {
        cout << num_one << " * " << num_two << " = " << num_one * num_two << "\n";
    }
    else if (op == 5)
    {
        int temp_one = num_one, temp_two = num_two;
        if (num_two == 0)
        {
            cout << "Math Error: cannot divide by 0." << "\n";
        }
        else if (num_one != temp_one || num_two != temp_two)
        {
            cout << "cannot execute modulo operation for floating point numbers." << "\n";
        }
        else
        {
            cout << num_one << " % " << num_two << " = " << temp_one % temp_two << "\n";
        }
    }
    else
    {
        cout << "error";
    }
    
    return 0;
}
// good work 👍 6/10
