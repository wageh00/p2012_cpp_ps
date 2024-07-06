#include <iostream>
using namespace std;
int main()
{
	// prompting user for number 2/2
	int num;
	cout << " Enter your number: ";
	cin >> num;

	// checking if the number is odd or even 3/3
	if (num % 2 == 0)
		cout << "Number is even";
	else
		cout << "Number is odd";

	return 0;
}
// great work 😎 9/10 ⭐

// Note: u can use ternary operator
// std::cout << "Number is " << ((x % 2 == 0) ? "even" : "odd") << std::endl
