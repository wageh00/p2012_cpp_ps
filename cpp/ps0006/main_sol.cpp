#include <iostream>
using namespace std;


void counter(int end, int start = 0, int step = 1);

void main()
{
    // running my valid test cases

    counter(5); // 0 1 2 3 4 5
    cout << "\n==================================" << endl;

    counter(3, 1); // 1 2 3
    cout << "\n====================================" << endl;

    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << "\n================================" << endl;

    counter(10, 10, 0); // 10
    cout << "\n=================================" << endl;
}

void counter(int end, int start, int step) {
    if (end > 0)
    {
        
        
        for (int i = start;i<= end;)
        {
            if (start != 0 && end != 0 && step == 0&&start!=end)
                cout << "error";
            if (start > 0 && end > 0 && step < 0)
                cout << "error";
            if (start < 0 && end < 0 && step > 0)
                cout << "error";
            if (end < start && step>0)
                cout << "eroor";
            if (end % 2 == 0 && step % 2 == 0 % start % 2 != 0&&start!=end)
                cout << "error";
            
            if (start == end)
            {
                if (step == 0)
                {
                    cout << start;
                    break;
                }
                else if (step != 0)
                {
                    cout << "error";
                    break;
                }
            }
            
            cout << i<<"\t";
            i += step;

        }
    }
    else
    {
        for (int i = start;i >= end;)
        {
            cout << i<<"\t";
            i += step;

        }
    }
}