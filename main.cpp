// main.cpp

#include <cstdlib>
#include "duck.h"
#include "redheadduck.h"
#include "rubberduck.h"
#include "flybehavior.h"
#include "flywithwings.h"

int main(int argc, char *argv[]) {
    Duck *d1 = new RubberDuck();
    d1->display();
    d1->performQuack();
    d1->performFly();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
