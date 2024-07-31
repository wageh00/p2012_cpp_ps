#include<iostream> /*"iostream" not "iostream.h" is the correct header file to include for using input-output 
stream objects in new verions of c++ */
using namespace std;

int main(void) {
	/* using void in main function indicates that this functions takes no argument so we can use it as an
	argument or not */

	cout << "Hello, world!\n"; // for new line we use '\' not '/'  
	//and for print the output we use "<<" after cout not">>" 

	return 0; // returning 0 means successful execution not 1 
}