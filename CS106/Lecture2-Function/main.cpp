/*
 * Content
 * function declare
 * function prototype
 * function parameter
 *  values parameter
 *  reference parameter
 * defalut parameter
 * ouput parameter
 * quadratic excercise
 *
 */

#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a = 17, b = 35;
    swap(a,b);
    cout << "a = " << a << ", b = " << b << endl;
    // a = 35, b = 17
    // function use reference parameters
    // link to same memory
    // so values that a,b in main point swap too
    return 0;
}
