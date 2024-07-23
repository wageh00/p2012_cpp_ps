#include <iostream>

using namespace std;

void counter( int  end ,int  start=0,int  step=1);


int main()
{


  //calling counter function

   counter(-8,31,-2);
return 0;
}




//function definition for counting


void counter (int   end,int   start,int  step) {




 if(start ==end&&step==0)
        cout<<start<<endl;


else  if(start !=end&&step==0)
   cout<<"Error:can't start from  "<<start<<" to "<<end<<" with step "<<step<<endl;


    else if(start==end &&step !=0)
   cout<<"Error:can't start from  "<<start<<" to "<<end<<" with step "<<step<<endl;

  else if(end > start&&step >0){
         if ((end-start)%step!=0)
   cout<<"Error:can't start from  "<<start<<" to "<<end<<" with step "<<step<<endl;
  else
  for(;start<=end;start+=step){
    cout <<start <<endl;
  }
}




 else if (end< start && step <0){
   if ((end-start)%step!=0)
   cout<<"Error:can't start from  "<<start<<" to "<<end<<" with step "<<step<<endl;
   else
 for(;start>=end;start+=step){
    cout <<start <<endl;}

}




 else if (start>end &&step >0 ){
  cout<<"Error:can't start from  "<<start<<" to "<<end<<" with step "<<step<<endl;

}




else if (start <end &&step <0){
cout<<"Error:can't start from  "<<start<<" to "<<end<<" with step "<<step<<endl;

}

}


