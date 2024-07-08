#include <iostream>

using namespace std;

int main()
{
    // prompting user for number 2/2
    int x, counter;
    cout << "Please enter the number of attempts \n";
    cin >> counter;
    
    for(int i = 1; i <= counter; i++)
    {
      cout << "\n Please enter the number\t";
      cin >> x;
        
     // checking if the number is odd or even 2.5/3
     if(x % 2 == 0)
         cout << " The number is even \n \n";
     else
         cout << " The number is odd \n \n";
    }

    return 0;
}
// great work 😎 8.5/10 ⭐
