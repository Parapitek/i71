#include "mallardduck.h"

MallardDuck::MallardDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

void MallardDuck::display() {
    cout << "I'm mallard duck" << endl;
}
