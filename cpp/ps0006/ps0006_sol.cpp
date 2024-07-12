#include <iostream>

using namespace std;

int counter(int end, int start, int step){
    int sum=start;
    for(int i=start;i<=end;i+=step){
      sum+=i;
    }
    return sum;
}

int main()
{
    int end, start{0},step{1};
    string value,value2;

    cout << "Enter the number you'll stop at:";
    cin >> end;

    while(end<=0){
        cout << "Invalid number, please enter a positive number:";
        cin >> end;
    }

    cout << "Do you want to set the start value? (yes/no):";
    cin >> value;

    if(value=="yes"){
        cout << "Enter the number you'll start at:";
        cin >> start;
    }

     while(start<0){
        cout << "Invalid number, please enter a positive number or zero:";
        cin >> start;
    }

    cout << "Do you want to set the step value? (yes/no):";
    cin >> value2;

    if(value2=="yes"){
        cout << "Enter the number you'll take as a single step:";
        cin >> step;
    }

     while(step<=0){
        cout << "Invalid number, please enter a positive number:";
        cin >> step;
    }

    int sum=counter(end,start,step);

    cout << "The sum of numbers is:" << sum << endl;

    return 0;
}
