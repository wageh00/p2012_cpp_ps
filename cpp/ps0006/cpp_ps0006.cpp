#include <iostream>

void spectial_counter(int end, int start, int step);

int main()
{
    spectial_counter(20);
    spectial_counter(20, 10);
    spectial_counter(20, 10, 5);
    spectial_counter(10, 20, -5);
    
    // spectial_counter(20, 10, -5); // error

    return 0;
}