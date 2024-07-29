#include <iostream>
using namespace std;
bool check(int end, int start = 0, int step = 1);
void counter(int end, int start = 0, int step = 1);

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

    counter(100, 10, 0);
    counter(10, 10, 3);
    counter(33, 33, -4);
    counter(-15, 11, 4);
    counter(3, 1, -1);
    counter(-1, 3);
    counter(-1, -8, 3);
    counter(-8, 31, -2);

    // running invalid test cases, have to give clear error
    /*


    // running bonus test cases

    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    cout << "===============" << endl;

    counter(100); // Massive number of iterations for our humble counter
    cout << "===============" << endl;

    counter(200, -44); // Massive number of iterations for our humble counter
    */


    return 0;
}
bool check(int end, int start , int step )
{
    if (start > 0 && end > 0 && step == 0 && start != end)
        return false;
    else if (start == end && (step > 0 || step < 0))
        return false;
    else if ((end < start && step>0) || (end > start && step < 0))
        return false;
    else if ((start < 0 && end < 0 && step>0) || (start > 0 && end > 0 && step < 0))
        return false;
    else if ((end % 2 == 0 && step % 2 == 0 & start % 2 != 0))
        return false;
    else
        return true;

}
void counter(int end, int start, int step) {
    if ((check(end, start , step )) == true)
    {
        if (end > start||start==end)
        {
            for (int i = start;i <= end;)
            {
                if (start == end && step == 0)
                {
                    cout << start;
                    break;
                }
                cout << i << "\t";
                i += step;
            }
        }
        else
        {
            for (int i = start;i >= end;)
            {
                cout << i << "\t";
                i += step;
            }
        }
    }
    else
        cout << "error \n";
}
