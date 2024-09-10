#ifndef DOG_H
#define DOG_H

#include "Pet.h"

using namespace std;

class Dog : public Pet{
    public:
        Dog();
        // Unique Interactions
        void talk();
        // void play();
};

#endif