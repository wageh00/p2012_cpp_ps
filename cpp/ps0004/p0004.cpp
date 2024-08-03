#include <iostream>
using namespace std;
int main() {
    // prompting user for number 1/1.5
    float number;
    cout << "Enter a number between 32 and 126: ";
    cin >> number;

    // checking invalidaty of user's input 4/4
    if (!(number)) {
        std::cout << "Invalid character/s or zero value." ;
        return 1;
        // هنا جمله if
        // هتحدد اللي انا مدخله صح ولا غلط انا دلوقتي عملت الرقم عدد صحيح باستخدام float
        // اي رقم هدخله هيخلي الناتج ترو فبالتالي هيطبع ويخرج من البرنامج
        // انما لو دخلت صفر او اي حاجه غير الارقام هيبقي الناتج فولس وهتتنفي يبقي ترو ويطبع ويخرج خالص
    }

    if (number != int(number)) {
       cout << "Invalid: a floating point number." ;
    }
    
    else if (number < 32 || number > 126) {
        cout << "Invalid: number is out of the range.";
    }

    else {
        cout << "The  ASCII character is: " << char(number); // print the character 2/2
    }
    
    return 0;
}
// great work 😎 9/10 ⭐
