#include<iostream>
using namespace std;

void Time(int Lnum, int Fnum = 0, int step = 1);
int main(void)
{

    cout << "the value is:\n";
    Time(5);
    cout << "the value is:\n";
    Time(3, 1);
    cout << "the value is:\n";
    Time(-21, 6, -3);
    cout << "the value is:\n";
    Time(10, 10, 3);
    // running invalid test cases, have to give clear error
    cout << "the value is:\n";
    Time(10, 10, 0);
    cout << "the value is:\n";
    Time(100, 10, 0);
    cout << "the value is:\n";
    Time(33, 33, -4);
    cout << "the value is:\n";
    Time(-15, 11, 4);
    // running bonus test cases
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

    if (start <= end && steps > 0 && end < 100)
    {
        for (int i = start; i <= end; i += steps)
        {
            cout << i;
        }
    }

    else
    {
        cout << "error can't start from" << end << "to" << start << "with steo" << steps << endl;
    }
}