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
using namespace std;

void nameDiamond(string name) {
    for (int i = 0; i < name.length(); i++){
        cout << name.substr(0, i + 1) << endl;
    }
    for (int i = 0; i < name.length(); i++){
        for (int j = 0; j < i+1; j++)
            cout << " ";
        cout << name.substr(i+1) << endl;
    }
}

int main() {
    nameDiamond("superme");
/*
s
su
sup
supe
super
superm
superme
 uperme
  perme
   erme
    rme
     me
      e
*/
    return 0;
}
