#include "rubberduck.h"

RubberDuck::RubberDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new Squeak();
}                        

void RubberDuck::display() {
    cout << "I'm rubber duck" << endl;
}


