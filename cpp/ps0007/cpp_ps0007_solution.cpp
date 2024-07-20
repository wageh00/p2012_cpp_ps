#include<iostream>
using namespace std;
const float PI = 3.141f;
float dimention[2] = { 0,0 };
float Area(char shape, float dimension[]);

int main()
{
	// prompting user for the shape 1/1.5
	char shape;
	cout << "enter the first letter of the shape name \n c:circle \n s:square \n r:rectangle\n";
	cin >> shape;

	// check the validaty of the choice for the shape 1/1
	// fill in the dimensions array 2/3
	if (shape == 'c')
	{
		cout << "enter radius of circle\n";
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
	{
		cout << "the program can't be calculated\n";
		return 1;
	}

	// printing out the area of the shape 1/1
	cout << "the area of the shape is:\n" << Area(shape, dimention);

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
// good work 👍 7/10
