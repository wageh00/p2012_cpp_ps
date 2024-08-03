#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <cstring>

using namespace std;

string decrypt(string msg,int key){

    size_t size=msg.length();
    int temp;
    bool upper,lower;

    // Making the key viable for decyprting

    key=key%25;

    if(key<0)
    key=26+key;

    // Decrypting process

    if(key==0) // Checks if there's no decrypting
        return msg;
    else{
       for(int i=0;i<size;++i){

         if(isalpha(msg[i])){ // Checking if the character needs to be decrypted
             upper=isupper(msg[i]);
             lower=islower(msg[i]);
             msg[i]=msg[i]+key;
            }

        if(upper && (msg[i]>90 || msg[i]<65)){ // Checks if the character went out of range & is an uppercase

           temp=msg[i]%90;
           msg[i]=64+temp;

        }

        else if((msg[i]>122 || msg[i]<97) && lower){ // Checks if the character went out of range & is a lowercase

            temp=msg[i]%122;
            msg[i]=96+temp;
        }

    }
    return msg;
    }

}

int main()
{
   string key,code,msg;

   // Key input
   cout << "Enter a number:";
   getline(cin , key);

   // Checks if key is valid
     bool validkey = false;
    while (!validkey) {
        validkey = true;
        for (char c : key) {
            if (!isdigit(c) && c!='-') {
                validkey = false;
                cout << "Invalid character! Please enter a number: ";
                getline(cin, key);
                break;
            }
        }
    }

   // Taking message
   cout << "Enter your cipher text:";
   getline(cin , msg);

   int num = stoi(key);

   // Calling the function
   code = decrypt(msg,num);

   // Printing the decrypted message
   cout << "The decrypted message is:" << code << endl;

   // End of program

    return 0;
}
