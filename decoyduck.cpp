#include "decoyduck.h"

void DecoyDuck::display() {
    cout << "I'm decoy duck" << endl;
}

// деревянные утки не крякают, 
// поэтому переопределяем метод
void DecoyDuck::quack() {

}

// деревянные утки не летают, 
// поэтому переопределяем метод
void DecoyDuck::fly() {

}
