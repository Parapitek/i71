#include "duck.h"

void Duck::performQuack() {
     quackBehavior->quack();
}

void Duck::performFly() {
     flyBehavior->fly();
}

void Duck::swim() {
    cout << "Ya plyvu" << endl;
}
