#include <iostream>
using namespace std;
int main()
{
	// prompting user for number 1/1.5
	cout << "Enter a number from 32 to 126: ";
	float number;   // initial value for the number we will try the program on it
	cin >> number; // entering the number

	/*
	// checking invalidaty of user's input 1.5/4
	// printing the number and the opposite printable character 2/2
	if ((126 >= number) && (number >= 32)) // the vaild range for entering the number we want to test it
	{	
		char ch = number; // putting the number value in a character value so we can print the number in its ascci code character value and test it in range or no
		cout << "The character for " << number << " is " << ch << endl; //printing the ascci code character value
	}
	else 
		cout << "Invalid character/s or zero value!" <<endl; 
	*/

	// checking invalidaty of user's input 4
	if (!number)
	{
	        cout << "Invalid character/s or zero value!\n";
	        return 1;
	}
	
	if ((int) number != number)
	{
	        cout << "Invalid: a floating point number!\n";
	        return 2;
	}
	
	if (number < 32 || number > 126)
	{
		cout << "Invalid: number is out of the range!\n";
	        return 3;
	}
	
	// printing the number and the opposite printable character 2
	cout << "The character for " << number << " is " << (char) number << "." << endl;
	return 0;
}
// good work 👍 6/10
