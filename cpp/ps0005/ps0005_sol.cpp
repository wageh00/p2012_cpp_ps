#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    char o ;
    int r ;
    cout<<"Enter the two operands:\n" ;
    cin>> a>> b ;
    cout<< "Enter an operator from these (+ - * / %): \n" ;
    cin >> o ;
    switch (o)
    {
case '+':
    r = a+b ;
    cout <<"("<<a<<") "<<"+"<<" ("<<b<<") "<<"= "<< r ;
    break ;
case '-' :
    r = a-b ;
    cout <<"("<<a<<") "<<"-"<<" ("<<b<<") "<<"= "<< r ;
    break ;
case '*':
    r = a *b ;
    cout <<"("<<a<<") "<<"*"<<" ("<<b<<") "<<"= "<< r ;
    break ;
case '%':
    r = a % b ;
    cout <<"("<<a<<") "<<"%"<<" ("<<b<<") "<<"= "<< r ;
    break ;
case '/':
        if (a == 0 && b == 0)
        {
            cout <<  "Infinite number of solutions: (0 / 0) is Undefined Quantity.\n" ;
        }
        else if ( b == 0)
        {
            cout << "Can't divide by zero \n" ;
        }
        else
        {
            r = a / b ;
            cout <<"("<<a<<") "<<"/"<<" ("<<b<<") "<<"= "<< r ;
        }
        break ;
    default :
        cout << " ERROR.\n" ;

        }

         return 0;
        }
