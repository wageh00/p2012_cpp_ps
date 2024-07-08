#include <iostream>

using namespace std;

int main()
{
    int x,counter;
    cout << "Please enter the number of attempts \n";
    cin>>counter;
    for(int i=1;i<=counter;i++)
    {
      cout << "\n Please enter the number\t";
      cin>>x;
      if(x!=0)
      {
         if(x%2==0)
         cout << " The number is even \n \n";
         else
         cout << " The number is odd \n \n";
      }

      else
        cout << " The number is Zero and it is not a even or an odd \n \n";
    }
}

