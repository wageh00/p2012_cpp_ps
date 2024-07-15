# include <iostream>
using namespace std ;
int main ()
{
float number; 
    cout << "Enter a number (must be between 32 and 126): ";
    cin >> number;
    if ( number - int (number) != 0)
  {  // إذا كان المدخل غير صحيح(رقم عشري)
        cout << "Invalid: a floating point number " << endl;
    }
    
   else if (number == 0 || cin.fail() ){
        // إاذا كان المدخل غير صحيح(مثلا حرف أو صفر)
        cout << "Invalid: character or zero value" << endl;
        }
      else if ( number < 32 || number > 126 || number < 0)
      {//إذا كان المدخل سالب او خارج الرينج
      cout << "Invalid number is out of the range" << endl;   }
       else {
        // طباعة الرمز المقابل في جدول ASCII
        cout << "The character for " << number << " is " << char(number) << endl;
    }

    return 0;
}