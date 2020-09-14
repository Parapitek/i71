#include <cstdlib>
#include "duck.h"
#include "redheadduck.h"
#include "rubberduck.h"

int main(int argc, char *argv[]) {
    Duck *d1 = new RubberDuck();
    d1->display();
    d1->fly();
    system("PAUSE");
    return EXIT_SUCCESS;
}
