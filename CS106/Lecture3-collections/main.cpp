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
    Vector<int> nums = {42, 23, 15, 899, 1};
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    return 0;
}
