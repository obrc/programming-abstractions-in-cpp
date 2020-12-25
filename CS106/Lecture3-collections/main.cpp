/*
 * content
 * collection
 * vector
 *  vector is collection elements with 0-base index, aka list
 *  create vector with {}, or add after
 * grid
 */

#include <iostream>
#include "vector.h"
using namespace std;

int main() {
    Vector<int> nums = {1,2,3,4,5,89,10};
    cout << nums << endl;
    //{1, 2, 3, 4, 5, 89, 10}
    nums.add(7);
    nums.add(8);
    cout << nums << endl;
    //{1, 2, 3, 4, 5, 89, 10, 7, 8}
    return 0;
}
