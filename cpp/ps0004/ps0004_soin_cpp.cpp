#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int num;
	cout << "Enter a number (ASCII value between 32 and 126) \n";
	cin >> num;

	if (num >= 32 && num <= 126) {
		char ch = static_cast<char>(num);
		cout << "Equivalent character \n" << ch << endl;
	}
	else {
		cout << "Invalid input. ASCII value must be between 32 and 126\n" << std::endl;
	}

	_getch();
}