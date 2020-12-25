/*
 * content
 * string is a sequence of characters (domain view)
 *  index access
 *  ASCII encodings, int value
 * string operation
 *  concatenate
 *  compare (ASCII order, case sensitive)
 *  mutable
 *      append
 *      erase
 *  s.find (string::npos)
 *  s.rfind
 *  s.insert(index, str)
 *  s.lenght or s.size
 *  s.replace
 *  s.substr
 * string stanford library operation
 * endsWith
 * startWith
 * integerToString(int)
 * realToString(double)
 * stringToInteger(str)
 * stringToReal(str)
 * equalsIgnoreCase(s1,s2)
 * toLowerCase(str)
 * toUpperCase(str)
 * trim(str)
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello", s2 = "World!";
    string s = s1 + ',' + ' ' + s2;
    cout << s << endl;
    s.append(" Nice to meet you ~");
    cout << s << endl;
    s.erase(6,7);
    cout << s << endl;
    //Hello, World!
    //Hello, World! Nice to meet you ~
    //Hello, Nice to meet you ~
    s[0] = 'h';
    cout << s << endl;
    //hello, Nice to meet you ~

    //diff to java
    // java's string is an unmutable memroy bolck, link to String object
    return 0;
}
