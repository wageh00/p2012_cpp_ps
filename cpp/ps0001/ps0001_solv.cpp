#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,sum=0;
    for (int i =1 ; i <=25 ; i++)
    {
        cout << "Enter 3 numbers \n";
        cin >> n1>>n2>>n3;
        sum = n1+n2+n3;
        cout <<"----------"<<"\n"<<sum <<"\n";
    }
}
