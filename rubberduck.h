#ifndef __RUBBERDUCK_H
#define __RUBBERDUCK_H

#include "duck.h"

class RubberDuck : public Duck {
public:
    virtual void display();
    void quack();  //резиновые не крякают
};

#endif    
