#include <iostream>

using namespace std;

int main()
{
    int a,b=0;
    float c,d=0;
    char proc;
    cout<<"please Enter Two number :)\nnow you can Enter frist number a= ";
    cin>>a;
    if(cin.fail()==true)
    {
    cout<<"Error please input number\n";
    system("pause");
    return 0;
    }
    else
    cout<<"now you can Enter scond number b= ";
    cin>>b;
    if(cin.fail()==true)
    {
    cout<<"Error please input number\n";

    system("pause");
    return 0;
    }
    else
    cout<<"Choose operation (+,-,*,/): \n";
    cin>>proc;
    switch (proc)
    {
    case '+':cout<<"("<<a<<"+"<<b<<")= "<<a+b<<endl;break;
    case '-':cout<<"("<<a<<"-"<<b<<")= "<<a-b<<endl;break;
    case '*':cout<<"("<<a<<"*"<<b<<")= "<<a*b<<endl;break;
    case '/':{
    if(b!=0)
    {
    c=(float)a;
    d=(float)b;
    cout<<"("<<c<<"/"<<d<<")= "<<c/d<<endl;
                }
    else
    cout<<"Error"<<a<<"/0 Wrong\n";};break;
    default:cout<<"Wrong choice you can choice between(-,+,*,/)\n";break;
    }
    system("pause");
    return 0;

}
