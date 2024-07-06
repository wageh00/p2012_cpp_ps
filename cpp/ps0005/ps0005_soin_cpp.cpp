#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int number1, number2;
	char x;
	cout << "enter the two operands\n";
	cin >> number1;
	cin >> number2;
	cout << "enter the operator + - % * / \n";
	cin >> x;
	
	if (x == '+')
		
	cout << number1 + number2;
	if (x == '-')

	cout << number1 - number2;
	if (x == '%')

		cout << number1 % number2;
	
	if (x == '*')

		cout << number1 * number2; 
	if (x == '/')

		cout << number1 / number2;

	_getch();
}
