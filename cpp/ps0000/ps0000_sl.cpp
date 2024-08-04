#include <iostream> // importing libraries should be started with # not @ and name is iostream only

// it's main not Main
int main() { 

    // it's << not >> we are printing data to the console not getting data
    // add std::endl; to end the line and add a new line (break)
    std::cout << "Hello, World!" << std::endl;

    // same message with escape \n
    std::cout << "Hello, World!\n";

    // main function runs your whole code return 0;
    return 0;
}