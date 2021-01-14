#include <iostream>
#include <cstdlib>
using namespace std;

int rantestprogram() {
    cout << "RAND_MAX = " << RAND_MAX << endl << "Get 10 rand() return " << endl;
    for (int i = 1 ; i <= 10; i++)
        cout << rand() << endl;
    return 0;
}

/* output
RAND_MAX = 2147483647
Get 10 rand() return
1622650073
984943658
1144108930
470211272
101027544
1457850878
1458777923
2007237709
823564440
1115438165
*/
