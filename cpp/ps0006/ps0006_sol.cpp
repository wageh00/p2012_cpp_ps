#include <iostream>

using namespace std;

bool input(int start, int end, int step) {
  if (step == 0) {
    cout << "Error: Step cannot be 0." << endl;
    return false;
  }
  if ((step > 0 && start > end) || (step < 0 && start < end)) {
    cout << "Error: Start value cannot reach end value with the given step." << endl;
    return false;
  }
  return true;
}


void counter(int start = 0, int end = 0, int step = 1) {
  if (!input(start, end, step)) {
    return;
  }

  cout << "Counting from " << start << " to " << end << " with step " << step << ":" << endl;

  for (int i = start; (step > 0 && i <= end) || (step < 0 && i >= end); i += step) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int start, end, step;

  cout << "Enter start value (default 0): ";
  cin >> start;

  cout << "Enter end value: ";
  cin >> end;

  cout << "Enter step value (default 1): ";
  cin >> step;

  counter(start, end, step);

  return 0;
}
