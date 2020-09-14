#ifndef __DECOYDUCK_H
#define __DECOYDUCK_H

#include "duck.h"

class DecoyDuck : public Duck {
public:
    void quack();
    void fly();
    virtual void display();
};

#endif    
