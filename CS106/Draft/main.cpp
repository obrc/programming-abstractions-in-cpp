#include "direction.h"
#include "console.h"
#include "testmath.h"
//#include "gmath.h"

int main_disable()
{
    /* book say
In C++, constants written in this form are private to the source file that contains   them and cannot be exported through an interface. To export the constant PI, you   need to add the keyword extern to both its definition and the prototype declaration   in the interface.
    */

    // but with just const declared and initializ PI in testmath.h
    // I still can use PI value in this cpp file
    // what wrong ?
    std::cout << PI_1;

    return 0;
}
