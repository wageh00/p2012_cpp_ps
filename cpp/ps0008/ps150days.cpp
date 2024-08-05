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
    cout << "\nciphertext: "; // no need for cin.ignore for 2 successive string inputs
    getline(cin, cipherText); // 1/1

    // invoke your decrypt function to return the plaintext 0.5/0.5
    decrypt(cipherText, inputKeyDigits);

    return 0;
}

// ============================== 👇 Decpryption process 3.5/3.5 👇 ==============================

string userInputKey() {
    bool isNotDigit = true;
  
    string input;

    while (isNotDigit) {
        cout << "key: ";
        getline(cin, input); // to avoid problems of cin like spaces
        int i = 0; // counter to check sign from first character
        for (char ch : input) {
            if ((ch == '-' || ch == '+') && i == 0) // as the first character only
                continue;

            if (isdigit(ch)) {
                isNotDigit = false;
            }
            else {
                isNotDigit = true;
                break;
            }
            
            ++i;
        }
    }
    return input;
}

// ==================== 👇 checking if the key is valid integer 2/3 👇 ====================

void decrypt(std::string msg, int key)
{
    string plainText = msg; // cannot allocate more memory for string later

    cout << "plaintext:  ";
    
    if (abs(key) >= 26) {
        key %= 26; // no need for loop
                   // 26 steps give the same point
    }

    if (key == 0) {
        cout << plainText;
        return;
    } // key may be multiple of 26

    int i = 0;
    for (char ch : msg) {

        if (isalpha(ch)) {

            //decrypt then add to plainText
            int t = int(ch);
            t -= key;

            if ((islower(ch) && t < 97) || (isupper(ch) && t < 65)) {
                t += 26;
            }
            else if ((islower(ch) && t > 122) || (isupper(ch) && t > 90)) {
                t -= 26;
            }
            
            ch = t;
        }
        
        // the previous lines line of code were repeated, DRY! 
        plainText[i++] = ch;
    }

    cout << plainText; // no need to repeat for every single character
}
// good work 👍 7.5/10
