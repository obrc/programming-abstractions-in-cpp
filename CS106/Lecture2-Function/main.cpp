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
#include <cmath>
using namespace std;

void quadratic(int a, int b, int c, double &root1, double &root2) {
    // a, b, c just use the vlaue, so set as values parameter
    // root1, root2, should carry the result to main function, so set as reference parameter
    double d = b * b - 4 * a * c;
    d = sqrt(d);
    root1 = (-b + d) / (2 * a);
    root2 = (-b - d) / (2 * a);
}

int main() {
    double root1, root2;
    quadratic(1,-3,-4,root1,root2);
    cout << "root1 = " << root1 << ", root2 = " << root2 << endl;
    return 0;
}
