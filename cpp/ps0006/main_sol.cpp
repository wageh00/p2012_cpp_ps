#include <iostream>
using namespace std;
bool check(int end, int start = 0, int step = 1);
void counter(int end, int start = 0, int step = 1);

int main()
{
    // running my valid test cases 3/3
    
    counter(5); // 0 1 2 3 4 5
    cout << endl << "===============" << endl;
    counter(3, 1); // 1 2 3
    cout << endl << "===============" << endl;
    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << endl << "===============" << endl;
    counter(10, 10, 0); // 10
    cout << endl << "===============" << endl;

    
    // running invalid test cases, have to give clear error 2/4
    
    counter(100, 10, 0); // Error: can't start from 10 to 100 with step 0
    cout << "===============" << endl;
    counter(10, 10, 3); // Error: can't start from 10 to 10 with step 3
    cout << "===============" << endl;
    counter(33, 33, -4); // Error: can't start from 33 to 33 with step -4
    cout << "===============" << endl;
    counter(-15, 11, 4); // Error: can't start from -15 to 11 with step 4
    cout << "===============" << endl;
    counter(3, 1, -1); // Error: can't start from 1 to 3 with step -1 // end = 3  start = 1  step = -ve
    cout << "===============" << endl;
    counter(-1, 3); // Error: can't start from 3 to -1 with step 1
    cout << "===============" << endl;
    counter(-1, -8, 3); // Error: can't start from -8 to -1 with step 3
    cout << "===============" << endl;
    counter(-8, 31, -2); // Error: can't start from 31 to -8 with step -2
    cout << "===============" << endl;
    
    
    // running bonus test cases +0
    
    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    cout << endl << "===============" << endl;
    counter(100); // Massive number of iterations for our humble counter
    cout << endl << "===============" << endl;
    counter(200, -44); // Massive number of iterations for our humble counter

    
    return 0;
}

bool check(int end, int start, int step)
{
    if (step == 0) // handling all cases
        return (start == end) ? true : false;
    if (start == end) // remove unnecessary conditions
        return false;
    if ((end < start && step > 0) || (end > start && step < 0))
        return false;
    if ((end - start) % step != 0) // for valid steps
        return false;

    return true;
}

void counter(int end, int start, int step) {
    if (check(end, start, step))
    {   
        if (end >= start)
        {
            for (int i = start; i <= end; i += step) // you can increase your counter here
            {
                if (start == end && step == 0)
                {
                    cout << start;
                    break;
                }
                cout << i << "\t";
            }
        }
        
        else
        {
            for (int i = start; i >= end; i+= step)
            {
                cout << i << "\t";
            }
        }
    }
    
    else
        cout << "error \n";
}
// good work 👍 7/10
