#include <iostream>
#include <limits>
#include <cctype>
#include <string>
using namespace std;


string userInputKey();
void decrypt(string msg, int key);


int main(void)
{
    // prompting user for valid ciphertext and key
   string inputKey =  userInputKey();

   int inputKeyDigits = stoi(inputKey);

   string cipherText;
   cout << "\n ciphertext: ";

   cin.ignore(1,'\n');

   getline(cin, cipherText);


  // cin >> cipherText;

    // invoke your decrypt function to return the plaintext
   decrypt(cipherText, inputKeyDigits);

    return 0;
}



string userInputKey() {
    bool isNotDigit = true;
  
    string input;

    while (isNotDigit) {
        cout << "key: ";
        cin >> input;
        for (char ch : input) {
            if (ch == '-')
                continue;

            if (isdigit(ch)) {
                isNotDigit = false;
            }
            else {
                isNotDigit = true;
                break;
            }
        }
      

    }

    return input;
}








void decrypt(std::string msg, int key)
{
    string plainText = "";

    /* implement your function and consider that:
        - all uppercase letters in ciphertext are uppercase letters in plaintext
        - all lowercase letters in ciphertext are lowercase letters in plaintext
        - all digits, special characters, spaces in ciphertext are the same in plaintext
    */
    if (key == 0) {
        cout << msg;
        return;
    }

    else if (abs(key) > 26) {

        while (abs(key) >= 26) {
            key %= 26;
        }

       

       

    }


   


   
    for (char ch : msg) {

        if (isalpha(ch)) {

            //decrypt then add to plainText
            int t = int(ch);
            t -= key;
            cout << "t = " << t <<"\n";
            if ( (islower(ch) && t >= 97 && t <= 122)   || isupper(ch) && t>=65 && t<=90 ){
                ch = static_cast<char>(t);
                cout << "ch = " << ch << endl;
                plainText += ch;
                cout << "plainText = " << plainText << endl;
            }

            else if (islower(ch) && t < 97) {
                t += 26;
                ch = static_cast<char>(t);
                cout << "ch = " << ch << endl;
                plainText += ch;
                cout << "plainText = " << plainText << endl;
            }
            else if (islower(ch) && t > 122) {
                t -= 26;
                ch = static_cast<char>(t);
                cout << "ch = " << ch << endl;
                plainText += ch;
                cout << "plainText = " << plainText << endl;
            }
            else if (isupper(ch) && t < 65) {
                t += 26;
                ch = static_cast<char>(t);
                cout << "ch = " << ch << endl;
                plainText += ch;
                cout << "plainText = " << plainText << endl;
            }
            else if (isupper(ch) && t > 90) {
                t -= 26;
                ch = static_cast<char>(t);
                cout << "ch = " << ch << endl;
                plainText += ch;
                cout << "plainText = " << plainText << endl;
            }
            
          
        }


        else {
            plainText += ch;
            cout << "plainText == " << plainText << endl;
        }


    }

    cout << plainText;

  

}