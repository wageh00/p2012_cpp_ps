#include <iostream>

using namespace std;

int counter(int end, int start=0, int step=1);

int main()
{

}

int counter(int end, int start, int step){

    int sum{0};

    if(end>start)
        sum=end-start;

    else if(start>end)
        sum=start-end;

    if((end<start && step>=0) || sum%step!=0){
        cout << "Error: invalid value of steps" << endl;
        return -1;
    }
    else if(end>start){
    for(int i=start;i<=end;i+=step)
      cout << i << endl;
      return 0;
    }
    else if(start>end){
        for(int i=start; i>=end; i+=step)
            cout << i << endl;
        return 0;
    }
    else{
        cout << start << endl;
        return 0;
    }

}

