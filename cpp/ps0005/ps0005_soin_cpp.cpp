#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	// prompting user for 2 operands and an operator 1.5/2
	double number1, number2;
	char op;
	cout << "enter the two operands\n";
	cin >> number1;
	cin >> number2;
	cout << "enter the operator + - % * / \n";
	cin >> op;

	// checking user inputs and processing 2/4
	// printing the result if all data is valid 1/1
	if (op == '+')
		cout << number1<<"+"<< number2<<"="<<number1+number2;
	else if (op == '-')
		cout << number1 << "-" << number2 << "=" << number1 - number2;
	else if (op == '*')
		cout << number1 << "*" << number2 << "=" << number1 * number2;
	else if (op == '/') {
		if (number1 == 0 && number2 == 0)
			cout << "Infinite number of solutions: (0 / 0) is Undefined Quantity.\n";
		else if (number1 != 0 && number2 == 0)
			cout << "Math error : cannot divide by 0 \n";
		else
			cout << number1 << "/" << number2 << "=" << number1 / number2;
	} // 0/1
	else if (op == '%')
	{
		if (number1 != (int)number1 || number2 != (int)number2)
			cout << "Cannot execute modulo operation for floating point numbers.\n";
		else
			cout << number1 << "%" << number2 << "=" << (int)number1 % (int)number2;
	} // 0/1
	else
		cout << "Invalid character for operator \n"; // 1/1
	// 1/1
	
	_getch();
}
// good work 👍 5.5/10
