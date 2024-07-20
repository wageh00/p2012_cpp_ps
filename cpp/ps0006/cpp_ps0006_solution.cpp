#include<iostream>
using namespace std;

void Time(int Lnum, int Fnum = 0, int step = 1);
int main(void)
{
    // running my valid test cases 2/3
    cout << "the value is:\n";
    Time(5);
    cout << "the value is:\n";
    Time(3, 1);
    cout << "the value is:\n";
    Time(-21, 6, -3);
    cout << "the value is:\n";
    Time(10, 10, 0);
    
    // running invalid test cases, have to give clear error 3/4
    cout << "the value is:\n";
    Time(10, 10, 3);
    cout << "the value is:\n";
    Time(100, 10, 0);
    cout << "the value is:\n";
    Time(33, 33, -4);
    cout << "the value is:\n";
    Time(-15, 11, 4);
    
    // running bonus test cases +0
    cout << "the value is:\n";
    Time(100, 1);
    cout << "the value is:\n";
    Time(100);
    cout << "the value is:\n";
    Time(200, -44);


    return 0;
}

void Time(int end, int start, int steps)
{
    if (start == end && steps == 0)
    {
        cout << end << endl;
        return;
    } // try to get rid of that case to implement your code comfortably

    if (start < end && steps > 0)
    {
        for (int i = start; i <= end; i += steps)
        {
            cout << i;
        }
    }

    else if (start > end && steps < 0)
    {
        for (int i = start; i >= end; i += steps)
        {
            cout << i;
        }
    } // you didn't validate that case

    else
    {
        cout << "error can't start from" << end << "to" << start << "with step" << steps << endl;
    }
} // for bonus you tried but not correct
// good work 👍 7/10
