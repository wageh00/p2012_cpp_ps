#include <iostream>

using namespace std;

int count(int start, int end) {
  if (start > end) {
    cout << "Error: Start number cannot be greater than end number." << endl;
    return 0;
  }
  int count = 0;
  cout << "Numbers between " << start << " and " << end << " (inclusive):" << endl;
  for (int i = start; i <= end; ++i) {
    cout << i << " ";
    count++;
  }
  cout << endl;
  return count;
}

int main() {
  int start, end;

  cout << "Enter the starting number: ";
  cin >> start;

  cout << "Enter the ending number: ";
  cin >> end;

  int e  = count(start, end);

  if (e > 0) {
    cout << "Total numbers counted: " << e << endl;
  }

  return 0;
}
