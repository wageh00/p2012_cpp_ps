#include <iostream>
using namespace std;

//nst float pi = 3.14;


float area (char square ,  float arr[] , int size );

int main()
{
   char square;
   float arr [] = { 3 , 3 };
cout<<area( square , arr , 2 )<<"\n";    
    
    
}
float area (char square , float arr[] , int size )
{
return arr[0] * arr[1] ;    
}