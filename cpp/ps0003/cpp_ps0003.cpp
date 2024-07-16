/* help your brother check if the number is even or odd
    - if the number is even, print "Number is even"
    - if the number is odd, print "Number is odd"
    
    - ex:
      => 909
      <= Number is odd

    - another ex:
      => 20000
      <= Number is odd
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Please Enter The Number: \n";
    cin >> x;

    if(x%2 == 0)
      cout << "Number is even";
    else
      cout << "Number is odd";

    return 0;
}