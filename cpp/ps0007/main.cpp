#include <iostream>

using namespace std;
 const float pi=3.141f;
 float dimensions[2]={0,0};
 float area (char shape ,float dimensions[]);
int main()
{
   char shape ;
     cout<<"Enter shape (r)for rectangle, (s) for square ,(c) for circle"<<endl;
     cin>>shape;





   switch(shape){
   case ('r'):
       cout <<"Enter the length and the width"<<endl;
       cin>>dimensions [0]>>dimensions [1];
        if (dimensions[0]<=0|| (shape =='r'&&dimensions[1]<=0)){
   cout<<"Dimensions must be positive numbers"<<endl;}
   else

     cout <<" the area is : "<<area (shape ,dimensions)<<endl;
       break;




   case ('s'):
       cout <<"Enter  side length of the square "<<endl;
       cin>>dimensions [0];
        if (dimensions[0]<=0|| (shape =='r'&&dimensions[1]<=0)){
   cout<<"Dimensions must be positive numbers"<<endl;}
   else
    cout <<" the area is : "<<area (shape ,dimensions)<<endl;

       break;





   case ('c'):
       cout <<"Enter  radius for the circle "<<endl;
       cin>>dimensions [0];
        if (dimensions[0]<=0|| (shape =='r'&&dimensions[1]<=0)){
   cout<<"Dimensions must be positive numbers"<<endl;}
   else
   cout <<" the area is : "<<area (shape ,dimensions)<<endl;
       break;




   default:
    cout<<"invalid shape"<<endl;
    break;
   }









    return 0;
}
float area (char shape ,float dimensions[]){
    switch(shape){

     case('r') :
      return dimensions[0]*dimensions[1];
      break;



      case('s'):
          return dimensions[0]*dimensions[0];
          break;




      case ('c'):
            return  pi*dimensions[0]*dimensions[0];
              break;



      default :
             return 0.0;
             break;
           }
}
