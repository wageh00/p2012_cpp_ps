#include<iostream>
using namespace std;

void checkEvenorOdd(int num) {
	if (num % 2 == 0)
		cout << "Number is Even\n";
	else
		cout << "Number is Odd\n";
}

int main() {
	int num;
	cout << "Enter a number to check if it's even or odd: ";
	cin >> num;
	checkEvenorOdd(num);

	return 0;

}