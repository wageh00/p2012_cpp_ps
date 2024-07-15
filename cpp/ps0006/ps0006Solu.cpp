#include <iostream>
using namespace std;


void counter(int end , int start = 0 , int step = 1) 
{ if (start <= end) 
 {if (step > 0) 
   { for (int i = start; i <= end; i += step) 
       { cout <<i <<" "; }
  }
    }
    else {
        cout <<" start should be less or equal to end ";
         }
    cout << endl;
}

int main()
{   int end, start ,steps;
   
    start = 20;  //  test case to warn the user from entering a wrong inputs
    end = 0;
    cout << "!Important Rules!\n" << "counting from " << start << " to " << end << endl;
    counter(end, start); cout << endl;

    cout <<"Enetr an end value to count from 0 to end\n";
    cin >>end; // test case 1 ,Counting from 0 to end 
   cout <<"counting from 0 to " <<end <<endl; 
   counter(end); cout << endl;

   cout << "Enetr an start and end values to count from start to end\n";
    cin >> start >>end;   // test case 2 ,Counting from start to end 
  cout <<"counting from " << start << " to " << end <<endl;
  counter(end, start); cout << endl;

  cout << "Enetr an start ,end and step values to count from start to end with steps\n";
    cin >>start >>end >>steps; // test case 3 ,  Counting from start to end with steps
    cout << "counting from " << start << " to " << end << " with step " << steps <<endl;
    counter(end, start, steps); cout <<endl;
 
    return 0;
}