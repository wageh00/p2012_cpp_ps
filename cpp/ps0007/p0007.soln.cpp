#include <iostream>
#include <cmath> //   pow لحساب  وقيمة π
using namespace std;

double area(char shape, double dimensions[]) {
    
    switch (shape) {
        case 'C':
            if (dimensions[0] <= 0) {
                cout << "Invalid dimension: Radius must be a positive number." << endl;
                return -1;
            }
            return M_PI * pow(dimensions[0], 2); // π * r^2

        case 'S': 
            if (dimensions[0] <= 0) {
                cout << "Invalid dimension: Side length must be a positive number." << endl;
                return -1;
            }
            return pow(dimensions[0], 2); // طول الضلع^2

        case 'R': 
            if (dimensions[0] <= 0 || dimensions[1] <= 0) {
                cout << "Invalid dimensions: Length and width must be positive numbers." << endl;
                return -1;
            }
            return dimensions[0] * dimensions[1]; // الطول * العرض

        default:
            cout << "Invalid shape type: Supported shapes are Circle (C), Square (S), Rectangle (R)." << endl;
            return -1;
    }
}

int main() {

    double circleDimensions[1] = {5};
    cout << "Circle Area: " << area('C', circleDimensions) << endl;

 
    double squareDimensions[1] = {4};
    cout << "Square Area: " << area('S', squareDimensions) << endl;

    
    double rectangleDimensions[2] = {6, 3};
    cout << "Rectangle Area: " << area('R', rectangleDimensions) << endl;

    return 0;
}
