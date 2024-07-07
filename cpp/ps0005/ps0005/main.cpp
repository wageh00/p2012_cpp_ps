#include <iostream>

using namespace std;

int check_number(float n1,float n2);

int main()
{
    // prompting user for number 1.5/1.5
    float num1,num2;
    char  ch;
    cout<<"Enter the two operands:\n";
    cin>>x>>y;
    
    cout<<"Enter the  operator + - * / % : \n";
    cin>>ch;

    // checking invalidaty of user's input 4/4
	   // printing the number and the opposite printable character 2/2
    switch(ch)
    {
         case '+':
             cout<<"("<<num1<<")+("<<num2<<")="<<num1+num2<<"\n";
         break;
         
         case '-':
             cout<<"("<<num1<<")-("<<num2<<")="<<num1-num2<<"\n";
         break;
         
         case '*':
             cout<<"("<<num1<<")*("<<num2<<")="<<num1*num2<<"\n";
         break;
         
         case '/': 
         {
             if(num2!=0)
                  cout<<"("<<num1<<")/("<<num2<<")="<<num1/num2<<"\n";
             else if(num1==0)
                  cout<<"Infinite number of solutions: (0/0) is undefined quantity.\n";
             else
                  cout<<"Math Error: cannot divide by 0.\n";
         }
         break;
         
         case '%':
         {
             if(check_number(num1,num2)==1)
                 cout<<"("<<num1<<")%("<<num2<<")="<<(int)num1%(int)num2<<"\n";
             else
                 cout<<"cannot execute modulo operation for floating point numbers.\n";
         }
         break;

         default:
            cout<<"Invalid character for operator. \n";
    }
 
    return 0;
}

check_number(float n1,float n2){
    int x1=(int)n1;
    int y1=(int)n2;
    if((x1==n1)&&(y1==n2))
        return 1;
    else
        return 0;
}
// great work 😎 9/10 ⭐
