# include <iostream>
using namespace std ;
int main ()
{
int operand1, operand2, result;
char operator_6;
cout << "Enter the first operand" << endl;
cin >> operand1;
cout << "Enter the second operand" << endl;
cin >> operand2;
cout << "Enter the operator(+,-,%,*,/) " << endl;
cin >> operator_6;
switch ( operator_6)
{case '+':
result = operand1 + operand2;
break;
case '-':
result = operand1- operand2;
break;
case '%':
if (operand2 !=0)
{ result = operand1 % operand2; }
else {cout << "Error\n" << endl;return 1;};
break;
case '*':
result =operand1 * operand2;
break;
case '/':
if (operand2 !=0)
{result = operand1 / operand2;}
else {cout << "Error" << endl;return 1;};
break;
default :cout << "Invalid operator\n" << endl;
return 1;}
cout << "Result=\n"<<result<< endl;
return 0;
}