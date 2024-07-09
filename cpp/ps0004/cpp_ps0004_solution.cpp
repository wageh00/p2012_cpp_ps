
#include<iostream>
using namespace std;
int main()
{
    double num;
    char x;
    int y;
    cout << "enter number from 32 to 126\n";
    cin >> num;
    int point = num;
    char ascii = num;

    if (num == 0 || num == 'x')
    {
        cout << "Invalid character/s or zero value.\n";

    }
    else if (num != point)
    {
        cout << "Invalid: a floating point number.\n";

    }

    else if (num < 0 || num <= 32 && num >= 126)
    {
        cout << "Invalid: number is out of the range.\n";

    }
    else
    {
        cout << "the character for  " << num << " is " << ascii << endl;
    }
    return 0;


}


