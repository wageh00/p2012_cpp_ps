#include <iostream>

using namespace std;

const float PI = 3.141f;
float dimensions[2] = {0,0};

float area (char shape, float dimensions[]);

int main()
{
   // prompting user for the shape 1.5/1.5
   char shape;
   cout << "Enter shape (r) for rectangle, (s) for square, (c) for circle" << endl;
   cin >> shape;
   
   // check the validaty of the choice for the shape 1/1
   // fill in the dimensions array 3/3
   // printing out the area of the shape 1/1
   switch(shape){
       case 'r':
           cout << "Enter the length and the width" << endl;
           cin >> dimensions[0] >> dimensions [1];
           if (dimensions[0] <= 0 || dimensions[1] <= 0){
               cout << "Dimensions must be positive numbers" << endl;
           }
           else
               cout << "the area is : " << area(shape, dimensions) << endl;
           break;
    
       case 's':
           cout << "Enter side length of the square " << endl;
           cin >> dimensions[0];
           if (dimensions[0] <= 0){
               cout << "Dimensions must be positive numbers" << endl;
           }
           else
               cout << "the area is : " << area(shape, dimensions) << endl;
           break;
    
       case 'c':
           cout << "Enter radius for the circle " << endl;
           cin >> dimensions[0];
           if (dimensions[0] <= 0){
               cout << "Dimensions must be positive numbers" << endl;
           }
           else
               cout << "the area is : " << area(shape, dimensions) << endl;
           break;
    
       default:
           cout << "invalid shape" << endl;
   }

   return 0;
}

float area (char shape, float dimensions[]){
    switch(shape){
        case 'r':
            return dimensions[0] * dimensions[1];

        case 's':
            return dimensions[0] * dimensions[0];

        case 'c':
            return PI * dimensions[0] * dimensions[0];

        default:
            return 0.0;
    }
}
// great work 😎 8/10 ⭐
