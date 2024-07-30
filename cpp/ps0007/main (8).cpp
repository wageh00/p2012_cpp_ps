#include <iostream>
#include <cmath>
using namespace std;

float area_rectangle(int height , int offer);
float area_square(int Length);
float area_circle(int ng);
float area_triangle(int h , int b);
const float pi=3.14;

int main()
{
int height , offer , Length , ng , h , b;
cout<<"enter your height , offer , Length , ng , h, b \n";
cin >>height>>offer>>Length>>ng>>h>>b;

cout<<"the area_rectangle is "<<area_rectangle(height , offer)<<"\n";
cout<<"the area_square is "<<area_square(Length)<<"\n";
cout<<"the area_circle is "<<area_circle(ng)<<"\n";
cout<<"the area_triangle is "<<area_triangle(h , b)<<"\n";
    
}
float area_rectangle(int height , int offer)
{
return height*offer;
}
float area_square(int Length)
{
return Length*Length;    
}
float area_circle(int ng)
{
return pi*ng*ng;    
}
float area_triangle(int h , int b)
{
return (b*h)/2;    
}