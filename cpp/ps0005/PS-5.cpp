#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char op;
    cout<< "please enter number1 \n";
    cin>>num1;
        cout<< "please enter the operator type + ,-,*,/ \n";
    cin>>op;
cout<< "please enter number2 \n";
    cin>>num2;


    switch (op){

    case ('-'):
    cout<< "the result = \t"<<num1-num2<<"\n";
    break;
    case ('+'):
    cout<< "the result = \t"<<num1+num2<<"\n";
    break;
    case ('*'):
    cout<< "the result = \t"<<num1*num2<<"\n";
    break;
    case ('/'):
    cout<< "the result = \t"<<num1/num2<<"\n";
    break;


    default:

        if(op!='*' || op!='/' || op!='+' || op!='-')
            cout<< "Invalid character for operator \n";

    }





    return 0;
}
