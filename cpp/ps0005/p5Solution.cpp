#include<iostream>

using namespace std;

int main() {
	// prompting user for the 2 operands and an operator 1.5/2
	double num1;
	double num2;
	char Operator;
	cout << "Enter 2 numbers and a symbol of [+,-,*,/,%]: ";
	cin >> num1 >> num2 >> Operator;

	// checking if the operator is valid 2.5/4
	// printing the result if all data is valid 2/2
	if (Operator == '+')
		cout << "The summation of the 2 numbers is " << num1 + num2 << endl;
	else if (Operator == '-')
		cout << "The subtraction of the 2 numbers is " << num1 - num2 << endl;
	else if (Operator == '*')
		cout << "The Multiplication of the 2 numbers is " << num1 * num2 << endl;
	else if (Operator == '/')
	{
		if (num2 == 0)
			cout << "Division by Zero is invalid";
		else
			cout << "The devision of the 2 numbers is " << num1 / num2 << endl;
	} // 0.5/1
	else if (Operator == '%')
	{
		if (num2 == 0)
			cout << "MOdulus by Zero is invalid";
		else
			cout << "The modula of the 2 numbers is " << num1 % num2 << endl;
	} // 0.5/1
	else
		cout << "Incorrect Operator, Please Enter one of [+,-,*,/,%]" << endl; // 1/1
	// 0.5/1
	
	return 0;
}
// good work 👍 7.5/10
