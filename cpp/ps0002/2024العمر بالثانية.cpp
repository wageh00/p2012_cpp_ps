#include<iostream>
using namespace std;

int main()
{
int age;
cin >> age;
int age_in_days=age*365;
int age_in_hours=age_in_days*24;
int age_in_scend=age_in_hours*60*60;

    cout << "age in days is:" << age_in_days<<"days\n"; 
   
    cout << "age in hours is:" << age_in_hours<<"hours\n"; 
    cout << "age in scend is:" << age_in_scend<<"scend\n"; 
    return 0;
}