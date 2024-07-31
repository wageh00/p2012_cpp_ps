#include <iostream>

using namespace std;

int main()

{
   // prompting user for 2 operands and an operator 1.5/2
   double num1;
   double num2;
   char oper;
   cin>>num1;
   cin>>num2;
   cin>>oper;

   // checking user inputs and processing 1.5/4
   // printing the result if all data is valid 1/1
   if (oper=='+')
     cout<<num1+num2;
   else if(oper=='-')
     cout<<num1-num2;
   else if (oper=='*')
     cout<<num1*num2;
   else if (oper=='/') // 0/1
     if (num2 == 0)
        cout<<"error";
     else
        cout<<num1/num2;
   else if (oper=='%') // 0/1
     if (num1==(int)num1 && num2==(int)num2 && num2!=0)
        cout<<(int)num1%(int)num2;
     else
        cout<<"error";
   else
      cout<<"invaild operation"; // 1/1
   // 0.5/1
   return 0;
}
// good work 👍 5/10
