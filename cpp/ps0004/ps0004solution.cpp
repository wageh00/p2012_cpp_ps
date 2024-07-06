
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number from 32 to 126: ";

	int number=1;   // initial value for the number we will try the program on it
	cin >> number; // intering the number
	char ch = number; // putting the number value in a character value so we can print the number in its ascci code character value and test it in range or no
	
	if ((126 > number) && (number > 32)) // the vaild range for entering the number we want to test it
		cout << "The character for " << number << " is " << ch << endl; //printing the ascci code character value
	else 
		cout << "Invalid character/s or zero value!" <<endl; 
	
	return 0;
}

