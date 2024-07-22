#include <iostream>

using namespace std;

void counter (int end, int start = 0, int steps = 1);

int main()
{
    // running my valid test cases 2/3

    counter(5); // 0 1 2 3 4 5
    cout << "===============" << endl;

    counter(3, 1); // 1 2 3
    cout << "===============" << endl;

    counter(-21, 6, -3); // 6 3 0 -3 -6 -9 -12 -15 -18 -21
    cout << "===============" << endl;

    counter(10, 10, 0); // 10
    cout << "===============" << endl;



    // running invalid test cases, have to give clear error 2/4

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

void counter(int end, int start, int steps)
{
    int test = end - start;
   
    if (test == 0 && steps != 0)
    {
        cout << "cant use entered steps because your start = " << start << " and your end = " << end << endl;
    }
     if (test != 0 && steps == 0) 
    {
        cout << "cant move from " << start <<" to " << end << " because your steps = " << steps << endl;
    }
    else if (test == 0 && steps == 0)
    {
        cout << start;
    }
    else {
        if (test % steps == 0) // step can end the problem from beginning
        {
            if (test > 0 && steps > 0)
            {
                for (int i =start; i<= end; i+=steps)
                    cout << i <<" ";
            } // this is the right place in code
            else if (test < 0 && steps < 0)
            {
                for (int i =start; i>= end; i+=steps)
                    cout << i <<" ";
            } // you didn't validate the down counter case
            else
            {
                cout << "cant move from " << start <<" to " << end << " because your steps = " << steps << endl;
            } // when the counter counts down but steps is increasing or when the counter counts up but steps is decreasing
        }
        else
        {
            cout << "cant move from " << start <<" to " << end << " because your steps = " << steps << endl;
        } // when steps fail to go from start to end
    }
}
// good work 👍 6/10
