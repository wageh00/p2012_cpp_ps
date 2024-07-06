#include <iostream>

using namespace std;


 int  check_number(float n1,float n2);
int main()
{ float x,y;
char  ch;
    cout<<"Enter the two operands:\n";
    cin>>x>>y;
    cout<<"Enter the  operator + - * / % : \n";
    cin>>ch;
    switch(ch)
    {   case '+':
         cout<<"("<<x<<")+("<<y<<")="<<x+y<<"\n";
         break;
         case '-':
        cout<<"("<<x<<")-("<<y<<")="<<x-y<<"\n";
        break;
        case '*':
         cout<<"("<<x<<")*("<<y<<")="<<x*y<<"\n";
         break;
         case '/':
             if(y!=0)
          cout<<"("<<x<<")/("<<y<<")="<<x/y<<"\n";
          else if(x==0)
          cout<<"Infinite number of solutions: (0/0) is undefined quantity.\n";
          else
            cout<<"Math Error: cannot divide by 0.\n";check_number
          break;
          case '%':
             if(check_number(x,y)==1)
           cout<<"("<<x<<")%("<<y<<")="<<(int)x%(int)y<<"\n";

           else
            cout<<"cannot execute modulo operation for floating point numbers.\n";

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
