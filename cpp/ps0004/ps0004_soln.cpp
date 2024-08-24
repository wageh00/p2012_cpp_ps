#include <iostream>

using namespace std;

int main()
{
 int a = 65;

cin >> a;
    char character1 = (char)a;

    if (a>=32 && a<=126)
    {
       cout << "The character for ASCII value " << a
         << " is " << character1 << endl;
    }
   else
   {
       cout << "Invalid character/s or zero value.";
   }

    return 0;
}
