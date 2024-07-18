#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// Function to calculate the area
float calculateArea(string shape, unsigned params[]) {
    if (shape == "rectangle") {
        return params[0] * params[1];
    } else if (shape == "triangle") {
        return 0.5 * params[0] * params[1];
    } else if (shape == "circle") {
        return M_PI * params[0] * params[0];
    } else if (shape == "square") {
        return params[0] * params[0];
    } else if (shape == "trapezoid") {
        return 0.5 * (params[0] + params[1]) * params[2]; 
    } else if (shape == "rhombus") {
        return 0.5 * params[0] * params[1]; 
    } else if (shape == "hexagon") {
        return (3 * sqrt(3) / 2) * params[0] * params[0];
    } else if (shape == "octagon") {
        return 2 * (1 + sqrt(2)) * params[0] * params[0];
    } else {
        cout << "Shape not recognized." << endl;
        return 0;
    }
}
int main() {
    string shape;
    unsigned paramCount;
    cout << "Enter the shape: ";
    cin >> shape;
    if (shape == "rectangle" || shape == "triangle" || shape == "trapezoid" || shape == "rhombus") {
        paramCount = 2;
        if (shape == "trapezoid") {
            paramCount = 3;
        }
    } else if (shape == "circle" || shape == "square" || shape == "hexagon" || shape == "octagon") {
        paramCount = 1;
    } else {
        cout << "Shape not recognized." << endl;
        return 0;
    }

    unsigned params[paramCount];
    for (int i = 0; i < paramCount; ++i) {
        cout << "Enter parameter " << i + 1 << ": ";
        cin >> params[i];
    }

    float area = calculateArea(shape, params);
    cout << "The area of the " << shape << " is: " << area << endl;

    return 0;
}