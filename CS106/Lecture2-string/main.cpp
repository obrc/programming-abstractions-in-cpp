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
 *  s.substr : print diamond
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
#include "strlib.h"
using namespace std;

int main() {
    string s = "Hello, superme";
    cout << s << endl;
    if (endsWith(s,"superme"))
        s = toLowerCase(s);
    cout << s << endl;
    if (startsWith(s,"hello"))
        s = toUpperCase(s);
    cout << s << endl;
    if (equalsIgnoreCase("Hello","hello")) {
        string s1 = "   help me    ";
        cout << trim(s1) << endl;
    }
    string s2 = integerToString(41);
    cout << s2 << " " << stringToInteger(s2) << endl;
    double pi = 3.1415926;
    s2 = realToString(pi);
    cout << s2 << " " << stringToReal(s2) << endl;
    return 0;
}
