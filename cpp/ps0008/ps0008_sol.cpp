#include <iostream>
#include <string>

using namespace std;
string decrypt(string ciphertext, int key) {
    string plaintext = "";
    int n = ciphertext.length();
    for (int i = 0; i < n; ++i) {
        char ch = ciphertext[i];
        if (!isalpha(ch)) {
            plaintext += ch;
            continue;
        }
         ch = tolower(ch);
        int shifted = ch -'a' + key;
         if (shifted < 0) {
            shifted += 26;
        }
     plaintext += (char)(shifted + 'a');
    }
    return plaintext;
}
int main() {
    int key;
    string ciphertext;
    cout << "Enter the key: ";
    cin >> key;
    cout << "Enter the ciphertext: ";
    cin.ignore();
    getline(cin, ciphertext);
    string plaintext = decrypt(ciphertext, key);
    cout << "Plaintext: " << plaintext << endl;
    return 0;
}
