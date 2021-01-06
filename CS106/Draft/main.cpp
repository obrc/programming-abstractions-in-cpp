#include "direction.h"
#include "console.h"

int main()
{

    Direction dir = NORTH;
    dir = leftFrom(dir);
    dir = leftFrom(dir);
    std::cout << directionToString(dir);

    return 0;
}
