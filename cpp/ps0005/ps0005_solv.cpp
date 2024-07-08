#include <iostream>

using namespace std;

int main()
{
    int x,y,result;
    char z;


    cout<<" Enter the two operands : \n ";
    cin>>x>>y ;

    cout<<" Enter the two operator = - * / % : \n ";
    cin>> z ;

    if(z == '+' || z == '-'  ||z == '*' || z == '/' || z == '%')
    {

        if(z == '+' )
        {
          result = x+y;
          cout<<" ( "<< x <<" ) " << z <<" ( "<< y <<" ) " <<" = "<< result <<" \n ";
        }


        else if(z == '-')
        {
          result = x-y;
          cout<<" ( "<< x <<" ) " << z <<" ( "<< y <<" ) " <<" = "<< result <<" \n ";
        }

          else if(z == '*')
        {
          result = x*y;
          cout<<" ( "<< x <<" ) " << z <<" ( "<< y <<" ) " <<" = "<< result <<" \n ";
        }


          else if(z == '/')
        {
             if(z == '/' && x!=0 && y==0)
            {
              cout<<" Math Error : cannot divide by 0 .  \n ";
            }

             else if(z == '/' && x==0 && y==0)
            {
              cout<<" Infinite number of solutions : ( 0 / 0 ) is Undefined Quantity .  \n ";

            }

              else
            {
              result = x/y;
              cout<<" ( "<< x <<" ) " << z <<" ( "<< y <<" ) " <<" = "<< result <<" \n ";
            }
        }

          else if(z == '%')
        {
              if(z == '%' && ( x== (float)x || y== float(y)))
            {
              cout<<" Cannot execute modulo operation for floating point numbers . \n ";
            }

              else
            {
              result = x%y;
              cout<<" ( "<< x <<" ) " << z <<" ( "<< y <<" ) " <<" = "<< result <<" \n ";
            }

        }

    }

     else if(z != '+' || z != '-'  ||z != '*' || z != '/' || z != '%')
    {
      cout<<" Invalid character for operator .  \n ";
    }



    return 0;
}
