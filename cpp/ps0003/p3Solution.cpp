#include<iostream>
using namespace std;

void checkEvenorOdd(int num) {
	if (num % 2 == 0)
		cout << "Number is Even\n";
	else
		cout << "Number is Odd\n";
}

int main() {
	// prompting user for number 2/2
	int num;
	cout << "Enter a number to check if it's even or odd: ";
	cin >> num;

	// checking if the number is odd or even 3/3
	checkEvenorOdd(num);
	return 0;
}
// great work 😎 10/10 ⭐
