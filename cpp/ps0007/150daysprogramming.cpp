// 150daysprogramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string>
#include <cmath> 







// void special_counter(int end, int start, int step);
void special_counter(int);
void special_counter(int , int);
void special_counter(int, int, int);


const float PI = 3.141f;

float dimensions[2] = { 0, 0 };

float area(char shape, float dimensions[]);

int main()
{

    // prompting user for shape and dimensions 
    char ch;
    cout << "enter the shape char : \n" << "c for circle: \n r for rectangle: \n s for square: \n t for triangle: \n ";
    cin >> ch;
    cout << area(ch, dimensions);



    return 0;

}

float area(char shape, float dimensions[]) {

    float input1, input2;
    switch (shape) {
    case 'c':
        // call circle area function
        cout << " enter the circle radius: ";
        cin >> input1;


        if (input1 > 0) {
            dimensions[0] = input1;

          
        }
        return PI * dimensions[0]* dimensions[0];
        break;
    case 'r':
        cout << " enter the rectangle length: ";
        cin >> input1;

        cout << " enter the rectangle width: ";
        cin >> input2;


        if (input1 > 0 && input2 > 0) {
            dimensions[0] = input1;
            dimensions[1] = input2;

           
        }
        return  dimensions[0] * dimensions[1];
        break;
    case 's':
        cout << " enter the square side length: ";
        cin >> input1;


        if (input1 > 0) {
            dimensions[0] = input1;

          
        }
        return  dimensions[0] * dimensions[0];
        break;
    case 't':
        cout << " enter the triangle base length: ";
        cin >> input1;

        cout << " enter the triangle height length: ";
        cin >> input2;


        if (input1 > 0 && input2 > 0) {
            dimensions[0] = input1;
            dimensions[1] = input2;

           
        }
        return  dimensions[0] * dimensions[1]/2;
        break;
    default:
        cout << "wrong charcter ";
    }








}

void special_counter(int x) {
    if (x > 0) {
        for (int i = 0; i <= x; i++) {
            cout << i << "\t";
        }
    }
    else
    {
        for (int i = 0; i >= x; i--) {
            cout << i << "\t";
        }

    }
    
}

void special_counter(int end , int start) {
    if (end > start) {
        for (int i = start; i <= end; i++) {
            cout << i << "\t";
        }
    }
    else {
        for (int i = start; i >= end; i--) {
            cout << i << "\t";
        }
       // cout << "start must be less than end";
    }
   

}

void special_counter(int end , int start , int step) {
    if (end > start) {
        for (int i = start; i <= end; i += step) {
            cout << i << "\t";
        }
    }
    else {
        for (int i = start; i >= end; i+=step) {
            cout << i << "\t";
        }
      //  cout << "start must be less than end";
    }

}






















