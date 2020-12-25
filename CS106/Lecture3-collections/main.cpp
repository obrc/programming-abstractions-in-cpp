/*
 * content
 * collection
 * vector
 *  vector is collection elements with 0-base index, aka list
 *  create vector with {}, or add after
 *  can access with [index]
 *  size
 *
 * grid
 */

#include <iostream>
#include "console.h"
#include "vector.h"

using namespace std;

int main() {
    Vector<string> names;
    names.add("zhao qian");
    names.add("sun li");
    names.add("bai jia xing");
    cout << names << endl;
    return 0;
}
