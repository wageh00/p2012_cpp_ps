#include<iostream>
#include<functional>
using namespace std;


int main() {
	int num1;
	int num2;
	char Operator;
	cout << "Enter 2 numbers and a symbol of [+,-,*,/,%]: ";
	cin >> num1 >> num2 >> Operator;
	if (Operator == '+')
		cout << "The summation of the 2 numbers is " << num1 + num2 << endl;
	else if (Operator == '-')
		cout << "The subtraction of the 2 numbers is " << num1 - num2 << endl;
	else if (Operator == '*')
		cout << "The Multiplication of the 2 numbers is " << num1 * num2 << endl;
	else if (Operator == '/')
		if (num2 == 0)
			cout << "Division by Zero is invalid";
		else
			cout << "The devision of the 2 numbers is " << num1 / num2 << endl;
	else if (Operator == '%')
		if (num2 == 0)
			cout << "MOdulus by Zero is invalid";
		else
			cout << "The modula of the 2 numbers is " << num1 % num2 << endl;
	else
		cout << "Incorrect Operator, Please Enter one of [+,-,*,/,%]" << endl;
	return 0;

}