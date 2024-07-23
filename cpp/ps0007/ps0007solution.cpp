#include<iostream>
using namespace std;

const float PI = 3.141f;
float dim[2] = { 0,0 };
float area (char shape, float dim[]);

int main()
{
	char shape;
	cout <<"\n enter the first letter of the shape you want to calculate area \n r for rectangle \n s for square \n c for circle \n";

    cin >>shape;
    float ar = 0;

    switch (shape) {
    case 'r':
    {
        cout << "enter the length and the width:\n";
        cin >> dim[0] >> dim[1];

        ar = area(shape, dim);
        cout << "the area of the rectangle = " << ar << endl;
        break;
    }
    case 's': 
    {cout << "enter the length:\n";
        cin >> dim[0];
      
        ar = area(shape, dim);
        cout << "the area of the square is = " << ar << endl;
        break;
    }
    case 'c': 
    { cout << "enter the radius:\n";
        cin >> dim[0];
 
        ar = area(shape, dim);
        cout << "the area of the circle is = " << ar << endl;
        break;
    }
    
    default:
        cout << "this shape is not available\n" << endl;
        break;
    }
	return 0;
}
float area(char shape, float dim[]) 
{ float ar =0;

    switch (shape) 
    {
    case 'r':
        ar = dim[0] * dim[1];
        break;
    case 's':
        ar = dim[0] * dim[0];
        break;
    case 'c':
        ar = PI * dim[0] * dim[0];
        break;
   
    default:
        cout << "this shape is not available\n";
        break;
    }
    return ar; 
}