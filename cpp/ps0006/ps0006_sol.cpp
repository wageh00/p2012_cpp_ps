#include <iostream>

using namespace std;

int counter(int end, int start=0, int step=1);

int main()
{
    // running my valid test cases
    
    counter(5); // 0 1 2 3 4 5
    cout << "===============" << endl;
    
    counter(3, 1); // 1 2 3
    cout << "===============" << endl;
    
    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << "===============" << endl;
    
    counter(10, 10, 0); // 10
    cout << "===============" << endl;
    
    
    
    // running invalid test cases, have to give clear error
    
    counter(100, 10, 0); // Error: can't start from 10 to 100 with step 0
    cout << "===============" << endl;
    
    counter(10, 10, 3); // Error: can't start from 10 to 10 with step 3
    cout << "===============" << endl;
    
    counter(33, 33, -4); // Error: can't start from 33 to 33 with step -4
    cout << "===============" << endl;
    
    counter(-15, 11, 4); // Error: can't start from -15 to 11 with step 4
    cout << "===============" << endl;
    
    counter(3, 1, -1); // Error: can't start from 1 to 3 with step -1
    cout << "===============" << endl;
    
    counter(-1, 3); // Error: can't start from 3 to -1 with step 1
    cout << "===============" << endl;
    
    counter(-1, -8, 3); // Error: can't start from -8 to -1 with step 3
    cout << "===============" << endl;
    
    counter(-8, 31, -2); // Error: can't start from 31 to -8 with step -2
    cout << "===============" << endl;
    
    
    
    return 0;
}

int counter(int end, int start, int step){

    int sum{0};

    if(end>start)
        sum=end-start;
    else if(start>end)
        sum=start-end;
    
    if (step == 0 && start == end)
    {
        cout << start << endl;
        return 0;
    } // should have written before modulo operation as x%0 will stop your code as a runtime error
    else if((end<start && step>=0) || (end>start && step<=0) || (sum%step!=0)){
        cout << "Error: invalid value of steps" << endl;
        return -1;
    } // missing condition
    else if(end>start && step>0){
        for(int i=start;i<=end;i+=step)
            cout << i << endl;
        return 0;
    } // not handeled correctly
    else if(start>end && step<0){
        for(int i=start; i>=end; i+=step)
            cout << i << endl;
        return 0;
    } // not handeled correctly (the same mistake)
    else{
        cout << "Error: invalid value of steps" << endl;
        return 0;
    } // there is a case for which there is no need to print the start value (start = step && step != 0)
} // no need to make the return type as int

// good work 💪 7/10
