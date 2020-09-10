#ifndef __DUCK_H
#define __DUCK_H

#include <iostream>
using namespace std;

class Duck {
public:
    void quack();
    void swim();
    virtual void display() = 0;
};

#endif
