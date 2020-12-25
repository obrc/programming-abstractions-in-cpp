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
    return 0;
}
