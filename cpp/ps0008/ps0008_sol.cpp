#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// decryption process 2/3
string decrypt(string ciphertext, int key) {
    string plaintext = "";
    int n = ciphertext.length();
    key %= 26; // remove multiples of key value
    for (int i = 0; i < n; ++i) {
        char ch = ciphertext[i];
        if (!isalpha(ch)) {
            plaintext += ch;
            continue;
        }
        int shifted = tolower(ch) -'a' - key; // you decrept not encrypt
        if (shifted < 0) {
            shifted += 26;
        }
        else if (shifted > 25) {
            shifted -= 26;
        } // if the key is negative the shift is out-range too
        plaintext += (char)(shifted + (islower(ch) ? 'a' : 'A')); // make the decrepted letter be the same letter case
    }
    return plaintext;
}
int main() {
    string shamt,ciphertext;
    
    // Checks if key is valid 0.5/3
    bool validkey = false;
    int key_len;
    while (!validkey) {

        // Key input
        cout << "Enter a number:";
        getline(cin, shamt);
        key_len = shamt.length();

        if (key_len==0 || (key_len==1 && (shamt[0]=='+' || shamt[0]=='-'))) // to avoid parsing problems
            continue;

        validkey = true;
        int i = 0;
        for (char c : shamt) {
            if (i==0 && (c=='-' || c=='+')) // you need it at first not for calculations
            {
                ++i;
                continue;
            }
            if (!isdigit(c)) {
                validkey = false;
                break;
            }
            ++i;
        }
    }
    int key = stoi(shamt);
    
    // Taking message 1/1
    cout << "Enter the ciphertext: ";
    getline(cin, ciphertext);
    
    // Calling the function to return decrypted message 1/1
    string plaintext = decrypt(ciphertext, key);
    cout << "Plaintext: " << plaintext << endl;
    return 0;
}
// good work 👍 7.5/10
