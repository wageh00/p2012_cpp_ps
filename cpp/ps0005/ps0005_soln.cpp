#include <iostream>

using namespace std;

int main()
{
int num_one , num_two , op;
cout << "type number one\n";
cin >> num_one;
cout << "type number two\n";
cin >> num_two;
cout << "chose the opreation\n";
cout << "[1] +\n";
cout << "[2] -\n";
cout << "[3] /\n";
cout << "[4] *\n";
cout << "[5] %\n";
cin >> op;
if (op == 1)
{
    cout << num_one << " + " << num_two << " = " << num_one +  num_two <<"\n";
}
 else if (op == 2)
{
    cout << num_one << " - " << num_two << " = " << num_one -  num_two <<"\n";

}
 else if (op == 3)
  {
    cout << num_one << " / " << num_two << " = " << num_one /  num_two <<"\n";

  }
  else if (op == 4)
  {
    cout << num_one << " * " << num_two << " = " << num_one *  num_two <<"\n";

  }
  else if (op == 5)
  {
    cout << num_one << " % " << num_two << " = " << num_one %  num_two <<"\n";
  }
else
{
    cout << "error";
}



    return 0;
}
