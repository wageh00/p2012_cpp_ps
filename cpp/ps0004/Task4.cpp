#include <iostream>

using namespace std;

int main()
{
    // prompting user for number 1.5/1.5
    float x;
    int y;
    char r;

    cout << "Enter number from 32 to 126: \n" ;
    cin >> x;

    y=x;
    r=x;

    // checking invalidaty of user's input 4/4
	// printing the number and the opposite printable character 2/2
    if ( x==0 )
    {
        cout << "Invalid character/s or zero value. \n";
    }

    else if ( y!=x )
    {
        cout << "Invalid: a floating point number. \n";
    }

    else if ( y==x )
    {
        if ( y<32 || y>126 )
        {
            cout << "Invalid: number is out of the range. \n";
        }

        else
        {
            cout << "The character for " << y;
            cout << " is " << r;

        }
    }

    return 0;
}
// great work 😎 9.5/10 ⭐
