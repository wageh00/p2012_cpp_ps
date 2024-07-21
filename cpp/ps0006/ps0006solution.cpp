#include <iostream>

using namespace std;

void counter (int end, int start = 0, int steps = 1);

int main(void)
{

    return 0;
}

void counter(int end, int start, int steps)
{
    int test = 0;
    if (end > start)
        test = end - start;

    if (end > start) 
    { for (int i =start; i<= end; i+=steps)

            cout << i <<" ";
    }
   
    if (test == 0 && steps != 0)
    {
        cout << "cant use entered steps because your start = " << start << " and your end = " << end << endl;
    }
     if (test != 0 && steps == 0) 
    {
        cout <<"cant move from " << start <<" to " << end << " because your steps = " << steps << endl;
    }
    else if (test == 0 && steps == 0)
    {
        cout << start;
       
    } 

}