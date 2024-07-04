#include <iostream>

using namespace std;

int main()
{
    short a ,b ,c ;
    short s ;
    cin >> a ;
    cout << "+\n" ;
    cin >> b  ;
    cout <<"+\n" ;
     cin >> c;
     cout << "=\n" ;
     s= a + b + c ;
     cout<< s << endl  ;

     if ( s % 2 == 0 ) {
        cout << "Number is even \n" ;
     } else {
        cout<< "Number is odd \n" ;
     }

    return 0;
}

