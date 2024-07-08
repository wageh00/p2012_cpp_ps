#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	// prompting user for number 1/1.5
	float num;
	cout << "Enter a number (ASCII value between 32 and 126) \n";
	cin >> num;

	// checking invalidaty of user's input 1.5/4
	// printing the number and the opposite printable character 1.5/2
	if(!num) {
		cout << "Invalid character/s or zero value!\n";
	}
	else if((int) num != num) {
		cout << "Invalid: a floating point number!\n";
	}
	else if(num >= 32 && num <= 126) {
		char ch = static_cast<char>(num);
		cout << "Equivalent character for the number " << num << " is " << ch << "." << endl;
	}
	else {
		cout << "Invalid: number is out of the range!\n";
	}

	_getch();
}
// good work 👍 5/10
