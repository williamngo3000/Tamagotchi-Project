#include "Dog.h"

#include <iostream>

using namespace std;

Dog::Dog() : Pet() {
    setHungerRate(5);
    setSleepRate(3);
    setBoredomRate(3);
    setHappinessRate(4);
}

void Dog::talk() {
    cout << "Bark!" << endl;
}

// void Dog::play() {
//     setHunger(getHunger() * getHungerRate());
//     setSleepRate(getSleep() * getSleepRate());
//     setBoredom(getBoredom() * getBoredomRate());
//     setHappiness(getHappiness() * getHappinessRate());
// }