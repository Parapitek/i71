#include "rubberduck.h"

void RubberDuck::display() {
    cout << "I'm rubber duck" << endl;
}

// резиновые утки не крякают, 
// поэтому переопределяем метод
void RubberDuck::quack() {
    cout << "pi pi pi" << endl;
}
