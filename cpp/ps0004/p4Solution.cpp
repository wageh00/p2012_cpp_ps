#include<iostream>

using namespace std;

int main() {
	// prompting user for number 1.5/1.5
	float num;
	char character;
	cout << "Enter the ascii code[32 : 126] to get its corresponding character: ";
	cin >> num;

	// checking invalidaty of user's input 4/4
	if (num == 0)
		cout << "Invalid character/s or Zero value";
	else if (num != int(num))
		cout << "In valid: a floating-point number\n";
	else if (!(num >= 32 && num <= 126))
		cout << "Invalid: Out of range\n";
	else {
		character = static_cast <char>(num);
		cout << "The Character of Ascii code: " << num << " is " << character << endl;
	}
	return 0;
}
// great work 😎 8.5/10 ⭐
