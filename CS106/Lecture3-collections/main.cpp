/*
 * content
 * collection
 * vector
 *  vector is collection elements with 0-base index, aka list
 *  create vector with {}, or add after
 *  can access with [index]
 *  size
 *  iterating over
 *      for loop
 *      for loop backward
 *      "for-each" loop
 * grid
 */

#include <iostream>
#include "console.h"
#include "vector.h"

using namespace std;

int main() {
    Vector<int> seq = {1,2,3,4,5,6,7,8,9,10};
    // for loop
    for (int i = 0; i < seq.size(); i++){
        cout << seq.get(i) << " ";
    }
    cout << endl;
    // for loop backward
    for (int i = seq.size() - 1; i >= 0; i--) {
        cout << seq.get(i) << " ";
    }
    cout << endl;
    Vector<string> names;
    names.add("zhao qian");
    names.add("sun li");
    names.add("bai jia xing");
    // for-each loop
    for (string name : names) {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}
