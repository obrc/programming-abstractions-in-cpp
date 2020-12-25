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
    getline(cin,s);
    cout << "repeat what you input :" << s;
    //yes ok haha
    //repeat what you input :yes ok haha
    //use getline method to handle blank
    return 0;
}
