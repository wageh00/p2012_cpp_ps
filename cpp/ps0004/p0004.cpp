#include <iostream>
using namespace std;
int main() {
    int number;
   cout << "Enter a number between 32 and 126: ";
      cin >> number;
    if (!(number)) {
        std::cout << "Invalid character/s or zero value." ;
        return 1;
        // هنا جمله if 
        //هتحدد اللي انا مدخله صح ولا غلط انا دلوقتي عملت الرقم عدد صحيح باستخدام int 
       // اي رقم هدخله هيخلي الناتج ترو فبالتالي هيطبع ويخرج من البرنامج
    //   انما لو دخلت صفر او اي حاجه غير الارقام هيبقي الناتج فولس وهتتنفي يبقي ترو ويطبع ويخرج خالص
    }

   if (number != int(number)) {
       cout << "Invalid: a floating point number."  ;
    }
    
    else if (number <= 0) {
       cout << "Invalid character/s or zero value.";
    }
    
    else if (number < 32 || number > 126) {
        std::cout << "Invalid: number is out of the range." ;
    }
   
    else {
        std::cout << "The  ASCII character is: " << char(number) ;
    }

    return 0;
}
