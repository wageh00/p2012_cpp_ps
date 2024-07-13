#include <iostream>
using namespace std;
int main()
{
    
    int A;
    int B;
    char C;
    float D;
    
   cout<<"enter your A , B \n";
    cin>>A>>B;
    
   cout<<"enter your operator + - * / % \n";
    cin>>C;
    
   switch(C)
    { 
    case '+' : 
     cout<<"D="<<A+B<<"\n";
      break ;
      
    case '-' :
     cout<<"D="<<A-B<<"\n";
      break;
      
    case '*' :
     cout<<"D="<<A*B<<"\n";
      break;
     
    case '/' :
        if(A==B)
        cout<<"D=1 \n"
        else    
     cout<<"D="<<A/B<<"\n";
      break;
      
    case '%' :
     cout<<"D="<<A%B<<"\n";
      break;
    } 
      
    return 0;
}
