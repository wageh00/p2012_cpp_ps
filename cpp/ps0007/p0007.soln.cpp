#include <iostream>
#include <cmath> // for pow and M_PI
using namespace std;
double area(char shape, double dimensions[]) {
    switch (shape) {
        case 'C':
            if (dimensions[0] <= 0) {
                cout << "Invalid dimension: Radius must be a positive number." << endl;
                return -1;
            }
            return M_PI * pow(dimensions[0], 2); 

        case 'S':
            if (dimensions[0] <= 0) {
                cout << "Invalid dimension: Side length must be a positive number." << endl;
                return -1;
            }
            return pow(dimensions[0], 2); 

        case 'R':
            if (dimensions[0] <= 0 || dimensions[1] <= 0) {
                cout << "Invalid dimensions: Length and width must be positive numbers." << endl;
                return -1;
            }
            return dimensions[0] * dimensions[1]; 

        default:
            cout << "Invalid shape type: Supported shapes are Circle (C), Square (S), Rectangle (R)." << endl;
            return -1;
    }
}
int main() {
    // prompting user for the shape 1.5/1.5
    char shape;
    cout << "Enter shape (C for Circle, S for Square, R for Rectangle): ";
    cin >> shape;
    double dimensions[2] = {0, 0};

    // fill in the dimensions array 3/3
    switch (shape) {
        case 'C':
            cout << "Enter the radius: ";
            cin >> dimensions[0];
            break;
        case 'S':
            cout << "Enter the side length: ";
            cin >> dimensions[0];
            break;
        case 'R':
            cout << "Enter the length: ";
            cin >> dimensions[0];
            cout << "Enter the width: ";
            cin >> dimensions[1];
            break;
        default:
            cout << "Invalid shape type." << endl;
            return -1;
    }

    // check the validaty of the choice for the shape 1/1
    // printing out the area of the shape 1/1
    double result = area(shape, dimensions);
    if (result != -1) {
        cout << "The area is: " << result << endl;
    }
    return 0;
}
// great work 😎 9.5/10 ⭐
