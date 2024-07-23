#include <iostream>

using namespace std;

bool input(int start, int end, int step) {
  if (step == 0) {
    if (start == end) // added a valid case
      cout << start << endl;
    else
      cout << "Error: Step cannot be 0." << endl;
    return false;
  }
  if ((start == end) || (step > 0 && start > end) || (step < 0 && start < end)) { // added a case for start == end
    cout << "Error: Start value cannot reach end value with the given step." << endl;
    return false;
  }
  return true;
}


void counter(int end, int start = 0, int step = 1) { // swapped start with end
  if (!input(start, end, step)) {
    return;
  }


  if ((start - end) % step == 0) // added a condition for invalid steps
  {
    cout << "Counting from " << start << " to " << end << " with step " << step << ":" << endl;
    for (int i = start; (step > 0 && i <= end) || (step < 0 && i >= end); i += step) {
      cout << i << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "Error: Start value cannot reach end value with the given step." << endl;
  }
}

int main() {
  // running my valid test cases 3/3
    
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
    
    
    
    // running bonus test cases
    
    counter(100, 1); // 1 2 3 4 5 6 ... 95 96 97 98 99 100
    cout << "===============" << endl;
    
    counter(100); // Massive number of iterations for our humble counter
    cout << "===============" << endl;
    
    counter(200, -44); // Massive number of iterations for our humble counter
    
    
    return 0;
}
// good work 👍 7/10
