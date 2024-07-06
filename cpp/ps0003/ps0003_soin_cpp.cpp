#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int number;
	cin >> number;
	if (number % 2 == 0)
		cout << "Number is evan\n";
	else
		cout << "Number is odd\n";
	_getch();
}