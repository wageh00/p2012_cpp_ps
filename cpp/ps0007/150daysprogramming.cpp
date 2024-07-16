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


int main()
{

 
   /// special_counter(-3);
   // special_counter(-20, -10);
    //special_counter(20, 10, 5);
    //special_counter(10, 20, -5);

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






















