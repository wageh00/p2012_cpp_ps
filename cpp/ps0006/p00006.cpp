#include <iostream>
using namespace std;

 void counter(int end,int start=0,int step=1){ 
    if(step==0||(start>end && step>0)||(end>start && step<0)){
        cout<<"Invalid input parameters. Please check the start, end, and step values." ;
        return ;
    } 
   if (step>0){ 
        for( int i=start; i<=end;i+=step){
            cout<< i <<endl ;
        }
    }
    else if(step<0){
        for(int i=start;i>=end;i+=step){
            cout<< i<<endl;
        }
    }    
 }

int main()
{
   counter(10,0,1);
}