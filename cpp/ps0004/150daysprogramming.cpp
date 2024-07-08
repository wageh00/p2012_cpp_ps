// 150daysprogramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string>

//bool isFloat(string num);

bool isFloat(string num) {
    bool isFloating = false;
    for (char c : num) {
        if (c == '.') {
            isFloating = true;
            break;
        }
    }
    return isFloating;
}


bool isNumber( string s)
{
    for (char c : s) {
        if (s.length() > 1 && c == '-') {
            continue;
        }
        if (c == '.') {
            continue;
        }
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}



int main()
{
    string input;
    cout << "Enter a number from 32 to 126: ";
    cin >> input;

    bool isNum = isNumber(input);

    if (!isNum || input=="0") {
        cout << "Invalid character/s or zero value! \n";
    }
    else {
        bool isFloating = isFloat(input);
        if (isFloating) {
            cout << "Invalid: a floating point number! \n";
        }
        else {
            int intNumber = stoi(input);
            if (intNumber >= 32 && intNumber <= 126) {

                cout << "The character for " << intNumber << " is "<< char(intNumber) << " .";
            }
            else {
                cout << "Invalid: number is out of the range! \n";
            }
        }
    }

   
    
  
    
    
}

void days150ps0006() {
    string st1, st2;
    cout << "Enter the two operands: \n";
    cin >> st1;
    cin >> st2;
    cout << "\n\n Enter the operator + - * / %: \n";
    char op;
    cin >> op;
    cout << endl << endl;
    bool isSt1Float = isFloat(st1);
    bool isSt2Float = isFloat(st2);





    float num1, num2;
    num1 = stof(st1);
    num2 = stof(st2);



    switch (op) {
    case '+':
        cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 + num2;
        break;

    case '-':
        cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 - num2;
        break;
    case '*':
        cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 * num2;
        break;
    case '/':
        if (num1 == 0 && num2 == 0) {
            cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity.\n";
            break;
        }
        else if (num2 == 0) {
            cout << "Math Error: cannot divide by 0.";
            break;

        }
        else {
            cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << num1 / num2;
            break;
        }


    case '%':
        if (isSt1Float || isSt2Float) {
            cout << "cannot execute modulo operation for floating point numbers.\n";
            break;
        }
        else {
            cout << "(" << num1 << ") " << op << " (" << num2 << ") " << " = " << (int)num1 % (int)num2;
            break;
        }
    default:
        cout << "Invalid character for operator.\n";



    }
}

void days150ps003() {

    int number;
    cout << " enter the number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "Number is Even";
    }
    else
        cout << "Number is Odd";
}



