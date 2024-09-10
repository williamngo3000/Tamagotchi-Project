#include <string>

#ifndef PET_H
#define PET_H

using namespace std;

class Pet {
    public:
        Pet();
        // remember: make actions somehow decrease values
        // INTERACTION FUNCTIONS
        void play();
        void feed();
        void sleep();

        // SETTERS
        void setName(string);

        void setHungerRate(int);
        void setSleepRate(int);
        void setBoredomRate(int);
        void setHappinessRate(int);

        void setHunger(int);
        void setSleep(int);
        void setBoredom(int);
        void setHappiness(int);

        // GETTERS
        string getName() const;

        int getHunger();
        int getSleep();
        int getBoredom();
        int getHappiness();

        int getHungerRate();
        int getSleepRate();
        int getBoredomRate();
        int getHappinessRate();

        bool isAlive();
        void nextHour(int hour);
        void saveGameFile(string filename);
        void loadGameFile(string filename);
        void checkStatus();
    private:
        string name;
        bool alive;
        int hunger;
        int sleepiness;
        int boredom;
        int happiness;

        int hungerRate;
        int sleepRate;
        int boredomRate;
        int happinessRate;
};

#endif