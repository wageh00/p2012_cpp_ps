#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "Enter a number from 32 to 126:\n";
    cin >> num;
    if ((num >= 32) && (num <=126)) {
    char asciiChar = (char) num;
    cout << "The character for " << num << " is: " << asciiChar ;
    }
    else if (num!=(int)num) {
    cout << "Invalid a floating point number\n";
    }
    else if (num==0) {
    cout << "Invalid character/s or zero value\n";
    }
    else {
    cout << "Invalid number is out of the range\n";
    }
    
    return 0;
}