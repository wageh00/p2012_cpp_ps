#include <iostream>

using namespace std;

void counter( int  end ,int  start=0,int  step=1);


int main()
{


  //calling counter function

   counter(8);
return 0;
}




//function definition for counting


void counter (int   end,int   start,int  step) {
if(end > start&&step >0){
  for(;start<=end;start+=step){
    cout <<start <<endl;
  }
}




 else if (end< start && step <0){

 for(;start>=end;start+=step){
    cout <<start <<endl;}

}




 else if (start>end &&step >0 ){
cout <<" error: start number is greater than end number and the step is positive "<<endl;

}




else if (start <end &&step <0){
cout<<" error: start number is smaller  than end number and the step is negative "<<endl;

}
}







