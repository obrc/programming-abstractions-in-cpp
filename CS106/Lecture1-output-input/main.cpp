/*
 * content
 * <iostream>
 * cout,cin
 *
 *
 */

#include <iostream>
#include "console.h"

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << "repeat what you input :" << s;
    //yes ok
    //repeat what you input :yes
    //cin can't handle blank (see blank as input end flag)
    return 0;
}
