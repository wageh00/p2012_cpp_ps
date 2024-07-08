#include <iostream>

using namespace std;

int main()
{
    int x , counter;

    cout << "Please enter the number of attempts \n";
    cin>>counter;
    for(int i=1;i<=counter;i++)
    {
      cout<<" \n Please enter a number between 32 and 126 \t ";
      cin>>x;

       if(x>=32 && x<=126)
       {
         cout<<"The character for "<< x <<" is "<< char(x) <<" . \n \n";
       }

       else if((x<0 || x<32 || x>126) && x!=0)
        {
         cout<<"Invalid : number is out of the range ! \n \n";
        }

       else if(x==0 || x== char(x))
        {
         cout<<"Invalid character/s or Zero value ! \n \n";
        }

    }
return 0;
}
