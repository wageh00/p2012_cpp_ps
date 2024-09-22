#include <iostream>
using namespace std;

void Counter(int end, int start = 0, int step = 1)
{
    if (step == 0)
    {
        if (start == end)
        {
            cout << start << "\n";
            return;
        }
        else
        {
            cout << "Error: can't start from " << start << " to " << end << " with step " << step << "\n";
            return;
        }
    }

    if (start >= 0 && end >= 0 && step < 0)
    {
        cout << "Error: can't start from " << start << " to " << end << " with step " << step << "\n";
        return;
    }

    if (start < 0 && end < 0 && step > 0)
    {
        cout << "Error: can't start from " << start << " to " << end << " with step " << step << "\n";
        return;
    }

    if (start < 0 && end > 0 && step > 0)
    {
        cout << "Error: can't start from " << start << " to " << end << " with step " << step << "\n";
        return;
    }

    if (step > 0 && start < end)
    {
        for (int i = start; i <= end; i += step)
        {
            cout << i << "\n";
        }
    }
    else if (step < 0 && start > end)
    {
        for (int i = start; i >= end; i += step)
        {
            cout << i << "\n";
        }
    }

}

int main()
{

    Counter(10, 0, 1);
    return 0;
}

