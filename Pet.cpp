#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <istream>

#include "Pet.h"

using namespace std;

Pet::Pet() {
    // In case someone uncreative like YOU decide to not give the pet a name
    hunger = 50;
    sleepiness = 50;
    boredom = 50;
    happiness = 50;

    hungerRate = 0;
    sleepRate = 0;
    boredomRate = 0;
    happinessRate = 0;
}

// INTERACTION FUNCTIONS
void Pet::play() {
    hunger += 10;
    sleepiness -= 15;
    boredom -= 15;
    happiness += 10;
    checkStatus();
}

void Pet::feed() {
    hunger -= 15;
    sleepiness += 5;
    boredom -= 5;
    happiness += 10;
    checkStatus();
}

void Pet::sleep() {
    hunger -= 5;
    sleepiness -= 15;
    boredom -= 5;
    happiness += 10;
    checkStatus();
}

// SETTERS
void Pet::setName(string str) {
    name = str;
}

void Pet::setHungerRate(int n) {
    hungerRate = n;
}

void Pet::setSleepRate(int n) {
    sleepRate = n;
}

void Pet::setBoredomRate(int n) {
    boredomRate = n;
}

void Pet::setHappinessRate(int n) {
    happinessRate = n;
}

void Pet::setHunger(int n) {
    hunger = n;
}

void Pet::setSleep(int n) {
    sleepiness = n;
}

void Pet::setBoredom(int n) {
    boredom = n;
}

void Pet::setHappiness(int n) {
    happiness = n;
}

// GETTERS
int Pet::getHungerRate() {
    return hungerRate;
}

int Pet::getSleepRate() {
    return sleepRate;
}

int Pet::getBoredomRate() {
    return boredomRate;
}

int Pet::getHappinessRate() {
    return happinessRate;
}

string Pet::getName() const{
    return name;
}


bool Pet::isAlive() {
    if (hunger < 100) {
        return true;
    }
    return false;
}

void Pet::nextHour(int hour) {
    hunger += 10 * hour;
    sleepiness += 10 * hour;
    boredom += 10 * hour;
    happiness -= 10 * hour;
    checkStatus();
}

void Pet::checkStatus() {
    if (hunger >= 40) {
        cout << name << " is hungry!" << endl;
    }
    if (sleepiness >= 70) {
        cout << name << " is sleepy!" << endl;
    }
    if (boredom >= 65) {
        cout << name << " is bored!" << endl;
    }
    if (happiness <= 70) {
        cout << name << " is unhappy!" << endl;
    }
}

void Pet::loadGameFile(string filename) {
    ifstream inFS;
    inFS.open(filename);

    if(!inFS.is_open()) {
        cout << "File is not open!" << endl;
        exit(1);
    }

    // There is probably a more efficient way of doing this, but wtv (efficient way found, already replaced?)
    inFS >> name >> hunger >> sleepiness >> boredom >> happiness;
    inFS.close();
}

void Pet::saveGameFile(string filename) {
    ofstream outFS;
    outFS.open(filename);

    if(outFS.is_open()) {
        cout << "File is not open!" << endl;
        exit(1);
    }

    outFS << name << hunger << sleepiness << boredom << happiness;
    outFS.close();
}