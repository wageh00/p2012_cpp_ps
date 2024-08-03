#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

string decrypt(string msg,int key){

    size_t size=msg.length();
    int temp;
    bool upper,lower;

    // Making the key viable for decyprting
    key=key%26; // from 0 to 25 is 25 steps
                // but for the same letter you need 26 steps or its multiples
    
    if(key<0)
        key=26+key;

    // Decrypting process 2/3

    if(key==0) // Checks if there's no decrypting
        return msg;
    else{
        for(int i=0;i<size;++i){

            if(isalpha(msg[i])){ // Checking if the character needs to be decrypted
                upper=isupper(msg[i]);
                lower=islower(msg[i]);
                msg[i]=msg[i]-key; // cipaaaaaaaher to plain, you are decrypting
            
                if(upper && (msg[i]<65)){ // Checks if the character went out of range & is an uppercase
                   temp=64-msg[i];
                   msg[i]=90-temp;
                }
            
                else if((msg[i]<97) && lower){ // Checks if the character went out of range & is a lowercase
                    temp=96-msg[i];
                    msg[i]=122-temp;
                }
            }
        } // DRY!
        return msg;
    }
}

int main()
{
   string key,code,msg;

   // Checks if key is valid 2/3
    bool validkey = false;
    int key_len;
    while (!validkey) {
        
        // Key input
        cout << "Enter a number:";
        getline(cin , key);
        key_len = key.length();
        
        if (key_len==0 || (key_len==1 && (key[0]=='+' || key[0]=='-'))) // to avoid parsing problems
            continue;
        
        validkey = true;
        int i = 0;
        for (char c : key) {
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

   // Taking message 1/1
   cout << "Enter your cipher text:";
   getline(cin , msg);

   int num = stoi(key);

   // Calling the function 0.5/0.5
   code = decrypt(msg,num);

   // Printing the decrypted message 0.5/0.5
   cout << "The decrypted message is:" << code << endl;

   return 0;
}
// good work 👍 7.5/10
