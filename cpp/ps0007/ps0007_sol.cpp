#include <iostream>

using namespace std;
const float PI = 3.141f;

float dim[2] = {0, 0};

float area(char shape, float dim[]) {
    float ar = 0;

    switch (shape) {
        case 's':
            ar = dim[0] * dim[0];
            break;
        case 'c':
            ar = PI * dim[0] * dim[0];
            break;
        case 'r':
            ar = dim[0] * dim[1];
            break;
    }

    return ar;
}

int main() {
    // prompting user for the shape 1.5/1.5
    char shape;
    float ar;
    cout << "Enter the shape you want to calculate the area for (c:circle/r:rectangle/s:square): ";
    cin >> shape;

    // check the validaty of the choice for the shape 1/1
    // fill in the dimensions array 3/3
    // printing out the area of the shape 1/1
    switch (shape) {
        case 's': {
            cout << "Enter the side length: ";
            cin >> dim[0];
            while (dim[0] <= 0) {
                cout << "Invalid length! Enter a positive number: ";
                cin >> dim[0];
            }
            ar = area(shape, dim);
            cout << "The area of the square is: " << ar << endl;
            break;
        }
        case 'c': {
            cout << "Enter the radius: ";
            cin >> dim[0];
            while (dim[0] <= 0) {
                cout << "Invalid radius! Enter a positive number: ";
                cin >> dim[0];
            }
            ar = area(shape, dim);
            cout << "The area of the circle is: " << ar << endl;
            break;
        }
        case 'r': {
            cout << "Enter the length: ";
            cin >> dim[0];
            while (dim[0] <= 0) {
                cout << "Invalid length! Enter a positive number: ";
                cin >> dim[0];
            }
            cout << "Enter the width: ";
            cin >> dim[1];
            while (dim[1] <= 0) {
                cout << "Invalid width! Enter a positive number: ";
                cin >> dim[1];
            }
            ar = area(shape, dim);
            cout << "The area of the rectangle is: " << ar << endl;
            break;
        }
        default:
            cout << "Invalid shape!" << endl;
            break;
    }

    return 0;
}
// great work 😎 9/10 ⭐
