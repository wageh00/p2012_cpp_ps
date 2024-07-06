
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number from 32 to 126: ";

	int number=1;   
	cin >> number;
	char ch = number;
	
	if ((126 > number) && (number > 32))
		cout << "The character for " << number << " is " << ch << endl;
	else 
		cout << "Invalid character/s or zero value!" <<endl;
	
	return 0;
}

