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

void swap(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a = 17, b = 35;
    swap(a,b);
    cout << "a = " << a << ", b = " << b << endl;
    // a = 17, b = 35
    // function use value parameters
    // don't affect origin varialble
    return 0;
}
