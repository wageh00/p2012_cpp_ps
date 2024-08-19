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
  // prompting user for the shape 1.5/1.5
  cout << "rectangle (1) , circle (2), square (3)\n";
  int shape;
  cin >> shape;
  double dimension[2];

  
  // check the validaty of the choice for the shape 0/1
  // fill in the dimensions array 1.5/3
  if(shape == 3)
  {
    do {
      cout <<"Please Enter positive side length\n";
      cin >> dimension[0];
    } while (dimension[0] <= 0);
  }
  else if(shape == 2)
  {
    do {
      cout <<"Please Enter positive radius\n";
      cin >> dimension[0];
    } while (dimension[0] <= 0);
  }
  else if(shape == 1)
  {
    do {
      cout << "Please Enter Length And Width\n" ;
      cin >> dimension[0]>>dimension[1];
    } while (dimension[0] <= 0 || dimension[1] <= 0);
  }
  
  // printing out the area of the shape 1/1
  area(shape,dimension);
  return 0;
}
// good work 👍 5.5/10
