#include <iostream>
using namespace std;
const float PI = 3.141f;
float dimensions[2] = {0, 0};
float area(char shape, float dimensions[]);


int main()
{char shape ;
 float result;
 cout << "Enter shape type (c for Circle, s for Square, r for Rectangle): ";
 cin >> shape;

if (shape =='r')
{  cout << "Enter the length and width of the rectangle: ";
cin >> dimensions[0] >> dimensions[1];
cout << dimensions[0] * dimensions[1];
}
else  if (shape == 'c')
    {
cout << "Enter the radius of the circle: ";
cin >> dimensions[0];
cout <<  PI * dimensions[0] * dimensions[0];
    }
else if (shape == 's')
{
    cout << "Enter the side length of the square: ";
    cin >> dimensions[0];
    cout << dimensions[0] * dimensions[0];
}

    return 0;
}
