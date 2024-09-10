#include "Hamster.h"
#include <iostream>

Hamster::Hamster() : Pet() {
    setHungerRate(2);
    setSleepRate(2);
    setBoredomRate(2);
    setHappinessRate(3);
}
