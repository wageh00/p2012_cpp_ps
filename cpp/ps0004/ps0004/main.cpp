#include <iostream>

using namespace std;


 int  check_number(float n1);
int main()
{float  x;
cout<<"Enter a number from 32 to 126:\n";
cin>>x;
if(x>=32&&x<=126){
if(check_number(x)==1)
    cout<<"The character for"<<x<<"is"<<(char)x<<"\n";
else
    cout<<"invalid: a floating point number.\n";}
           else{

if((x<32||x>126)&&x!=0){
    if(check_number(x)==1)
 cout<<"invalid .number is out of the range\n";
else
  cout<<"invalid: a floating point number.\n";}
  else
cout<<"Invalid character/s or zero value!\n";}
    return 0;
}
int  check_number(float n1){
   int x=(int)n1;

    if(x==n1)
        return 1;
    else
        return 0;
}
