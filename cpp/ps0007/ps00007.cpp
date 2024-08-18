#include <iostream>
#include <string>
using namespace std;
void area(string shape, double dimension[])
{
  if(shape== "square")
  {
    float area2=dimension[0]*dimension[0];
    cout<< area2;
    cout<<"You Are Chosed Square\n";
  }
  else if (shape == "rectangle")
  {
    float area2 = dimension[0] * dimension[1];
    cout << area2;
    cout<<"You Are Chosed Rectangle\n";
  }
  else if (shape == "circle\n")
  {
    
    float area2 = dimension[0]*dimension[0]*3.14; 
    cout << area2;
    cout << "Your Are Chosed Circle\n";
  }
  else 
  {
    cout << "Invaild Input";
  }
} 
int main()
{
  string shape = ("rectangle (1) , circle (2), square (3)\n");
  cin >> shape;
  double dimension[2];
  if(shape == "square")
  {
    cout <<"Please Enter dimension\n";
    cin >> dimension[0];
  }
  else if(shape == "circle\n")
  {
    cout << "Please Enter Radius\n";
    cin >> dimension[0] ;
  }
  else if(shape == "rectangle")
  {
    cout << "Please Enter Length And Width\n " ;
    cin >> dimension[0]>>dimension[1];
  }
  area(shape,dimension);
  return 0;
}