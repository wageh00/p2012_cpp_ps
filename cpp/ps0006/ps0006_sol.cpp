#include <iostream>

using namespace std;

void counter(int end, int start=0, int step=1);

int main()
{
    int end,start=0,step=1;
    string value,value2;

    cout << "Enter the number you'll stop at:";
    cin >> end;

    while(end<=0){
        cout << "Invalid number, please enter a positive number:";
        cin >> end;
    }

    cout << "Do you want to set the start or step value? (yes/no):";
    cin >> value;

    while(value!="yes" && value!="no"){
        cout << "Invalid choice, please enter (yes/no):";
        cin >> value;
    }

    if(value=="yes"){
        cout << "Enter the number you'll start at:";
        cin >> start;
    }
    else if(value=="no"){
        cout << "The default value will be used for start (0) and for step (1)" << endl;
    }


     while(start<0){
        cout << "Invalid number, please enter a positive number or zero:";
        cin >> start;
    }

    if(value=="yes"){
    cout << "Do you want to set the step value? (yes/no):";
    cin >> value2;

    while(value2 !="yes" && value2 !="no"){
        cout << "Invalid choice, please enter (yes/no):";
        cin >> value2;
    }

    if(value2=="yes"){
        cout << "Enter the number you'll take as a single step:";
        cin >> step;
    }
     else if(value2=="no"){
        cout << "The default value will be used (0)" << endl;
    }

     while(step<=0){
        cout << "Invalid number, please enter a positive number:";
        cin >> step;
    }
    }
    if(start==0 && step==1)
        counter(end);
    else if(step==1)
        counter(end,start);
    else
        counter(end,start,step);



    return 0;
}

void counter(int end, int start, int step){
    for(int i=start;i<=end;i+=step){
      cout << i << endl;
    }
}

