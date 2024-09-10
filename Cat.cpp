#include "Cat.h"
#include <iostream>

Cat::Cat() : Pet() {
    setHungerRate(3);
    setSleepRate(5);
    setBoredomRate(2);
    setHappinessRate(2);
}
