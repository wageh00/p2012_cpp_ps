#include<iostream>
using namespace std;
double CalculateSum(double num1, double num2, double num3) {
	return num1 + num2 + num3;
}
int main() {

	cout << "The sum of your 3 numbers is: " << CalculateSum(155, 940, 168);

	/*
	double num1, num2, num3, sum;
	cout<< " Enter 3 number to sum:" ;
	cin >> num1 >> num2 >> num3;
	sum = num1 + num2 + num3;
	cout << "The of number is:" << sum;*/

	return 0;

}