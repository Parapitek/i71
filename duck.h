#ifndef __DUCK_H
#define __DUCK_H

#include <iostream>
#include "quackbehavior.h"
#include "flybehavior.h"
#include "flywithwings.h"
#include "flynoway.h"
#include "quack.h"
#include "squeak.h"
#include "mutequack.h"

using namespace std;

class Duck {
public:
    QuackBehavior *quackBehavior;
    FlyBehavior *flyBehavior;
    void performQuack();
    void performFly();
    void swim();
    virtual void display() = 0;
};

#endif
