/*
Explain what a cstring is. (1 pts)
Provide an implementation to a function that finds the number of characters in a cstring. 
    [You are not allowed to use the built-in strlen function] (2 pts)
Without using the [ ] operator, Cout (print) all the elements of a cstring off the top of your head. (3 pts)
    Hint: Remember how *ptr++ works.
*/

// cstring is an array of characters stored in a line in the memory, like a string.

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int findCharsInString(const char* stringCheck)
{
    int numChars = 0;
    for (const char* c = stringCheck; *c != '\0'; c++)
    {
        numChars++;
        cout << *c << endl;
    }
    return numChars;
}

int main()
{
    cout << "Enter a string\n";
    string inputString;
    getline(cin, inputString);
    const char* stringToChar = inputString.c_str();
    int numChars = findCharsInString(stringToChar);
    cout << "Number of characters in " << inputString << " is: " << numChars << endl;

    return 0;
}
