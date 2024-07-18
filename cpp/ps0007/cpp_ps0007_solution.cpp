#include<iostream>
using namespace std;
const float PI = 3.141f;
float dimention[2] = { 0,0 };
float Area(char shape, float dimension[]);

int main()
{
	char shape;
	cout << "enter the shape \n circle -sqare-rectangle\n";
	cin >> shape;
	if (shape == 'c')
	{
		cout << "enter redious of circle\n";
		cin >> dimention[0];
	}
	else if (shape == 's')
	{
		cout << "enter length of sqare\n";
		cin >> dimention[0];
	}
	else if (shape == 'r')
	{
		cout << "enter length and width of rectangle\n";
		cin >> dimention[0] >> dimention[1];
	}
	else
		cout << "the program can't be calculated\n";

	cout << "the shape is:\n" << Area(shape, dimention);

	return 0;

}

float Area(char shape, float dimension[])

{
	if (shape == 'c')
	{
		return PI * dimension[0] * dimension[0];
	}
	else if (shape == 's')
	{
		return dimension[0] * dimension[0];
	}
	else if (shape == 'r')
	{
		return dimention[0] * dimension[1];
	}
	else
		return 0.0f;
}
