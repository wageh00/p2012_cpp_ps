#include <iostream>

using namespace std;

const float PI = 3.141f;

float dimensions[2] = { 0, 0 };

float area(char shape, float dimensions[]);

int main()
{
    // prompting user for shape and dimensions 1.5/1.5
    char ch;
    cout << "enter the shape char : \n c for circle: \n r for rectangle: \n s for square: \n t for triangle: \n ";
    cin >> ch;

    // printing out the area of the shape 1/1
    float shape_area = area(ch, dimensions);
    if (shape_area == -1)
    {
        cout << "invalid shape or dimensions" << endl;
        return 1;
    }
    cout << shape_area;
    return 0;
}

float area(char shape, float dimensions[]) {
    // fill in the dimensions array 2/3
    switch (shape) {
        case 'c':
            cout << " enter the circle radius: ";
            cin >> dimensions[0];
            if (dimensions[0] > 0) {
                return PI * dimensions[0] * dimensions[0];
            }
            break;
        
        case 'r':
            cout << " enter the rectangle length: ";
            cin >> dimensions[0];
            cout << " enter the rectangle width: ";
            cin >> dimensions[1];
            if (dimensions[0] > 0 && dimensions[1] > 0) {
                return  dimensions[0] * dimensions[1];
            }
            break;
        
        case 's':
            cout << " enter the square side length: ";
            cin >> dimensions[0];
            if (dimensions[0] > 0) {
                return  dimensions[0] * dimensions[0];
            }
            break;
        
        case 't':
            cout << " enter the triangle base length: ";
            cin >> dimensions[0];
            cout << " enter the triangle height length: ";
            cin >> dimensions[1];
            if (dimensions[0] > 0 && dimensions[1] > 0) {
                return  dimensions[0] * dimensions[1] / 2;
            }
            break;
        
        default:
            cout << "wrong charcter ";
    } // dimensions must have positive value
    return -1; // float return type causes error for invalid choice of shapes list so we have to use return
}
// good work 👍 7/10
