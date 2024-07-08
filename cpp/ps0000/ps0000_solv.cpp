// @iinclude <"iostream.h">   // incorrect

#include <iostream>       // correct

/* First error  : To call any library, you must use #include not @iinclude .
   Second error : The library used is placed directly inside these brackets < > Without quotation marks " " .
   Third error  : The correct library is this iostream not iostream.h .
   2/2
*/

using namespace std;     // Missing

/*You forgot your command std to use print/output ,
 Because you cannot use command cout without use iostream library and command std .
 iostream library means : io --> input output & stream --> the name of library .
*/


// int Main(void)          // incorrect

int main(void)             // correct

/* First error  : If you used void inside main function you must change int --> to be --> void too.
   Second error : It tells you that no value is returned for this program so the command return must be deleted .

   1/1
*/

{
    // cout >> "Hello , world! /n"   // incorrect

    cout << "Hello, World! \n"; // correct

    /* First error  : The brackets used here are for the cin/input command, not the cout/output command.
       Second error : You are writing the wrong slant direction, it should be from this / to this \ .
       Third error  : You forgot the semicolon that is used to specify that this is the end of the requested command
                      and so that it moves to the next command.
       4/4
   */


    // return 1;     // incorrect

    return 0;    //  correct

    /* First  : You are writing the wrong value because return 0 in the main function means that the program executed successfully
                and return 1 in the main function means that the program does not execute successfully and there is some error.
       Second : You can use return 1 in a user-defined function because returning 1 means that the user-defined function returns true
                and returning 0 means that the user-defined function returns false in the case of user-defined function too .
       1/1
    */
}
// great work 😎 10/10 ⭐
