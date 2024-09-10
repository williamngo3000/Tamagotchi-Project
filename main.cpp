#include <iostream>

#include "Pet.h"
#include "Dog.h"
// #include "Cat.h"
// #include "Hamster.h"

#include <string>
#include <cctype>

using namespace std;

int main() {
    Pet* userPet;
    int mainChoice;

    cout << "Welcome to Tamagotchi Beta!" << endl;
    // start on the menu
    cout << "Please select one of the following options:" << endl;
    cout << "   1. Create a new save" << endl;
    cout << "   2. Load from a save" << endl;
    cout << "   3. Exit program" << endl;

    cin >> mainChoice;
    switch (mainChoice) {
        case 1: 
        {
            int petChoice;
            cout << "Select your pet type: " << endl;
            cout << "   1. Dog" << endl;
            cout << "   2. Cat" << endl;
            cout << "   3. Hamster" << endl;
            cin >> petChoice;

            switch (petChoice) 
            {
                case 1: 
                {
                    cout << "Dog is selected." << endl;
                    userPet = new Dog();
                    cout << "You have selected a dog!" << endl;
                    break;
                }
                case 2:
                {
                    // userPet = new Cat();
                    cout << "You have selected a cat!" << endl;
                    break;
                }
                case 3:
                {
                    // userPet = new Hamster();
                    cout << "You have selected a hamster!" << endl;
                    break;
                }
                default:
                {
                    cout << "Invalid option. Try again." << endl;
                    break;
                }
            }

            // string str;
            // string c;
            // cout << "Do you wish to name your pet? (Y/N)" << endl;
            // cin >> c;
            // if (c == "Y") {
            //     cout << "Enter your pet's name: " << endl;
            //     cin.ignore();
            //     getline(cin, str);
            //     userPet->setName(str);
            // } else {
            //     userPet->setName("Your pet ");
            // }

            break;
        }
        // case 2: 
        // {
        //     string fileName;
        //     cout << "Enter save file name: " << endl;
        //     cin >> fileName;

        //     Pet* userPet = new Pet();
        //     userPet->loadGameFile(fileName);

        //     cout << "Welcome back " << "savedPet->getName()" << "!" << endl;
        //     break;
        // }
        // default: 
        // {
        //     cout << "Please enter a valid option." << endl;
        //     break;
        // }
    }

    // while (!(userPet->isAlive())) {
    //     cout << "What would you like to do?" << endl;
    //     cout << "   1. Play with your pet" << endl;
    //     cout << "   2. Feed your pet" << endl;
    //     cout << "   3. Put your pet to bed" << endl;
    //     cout << "   4. Pass time" << endl;
    //     int choice;
    //     cin >> choice;

    //     switch(choice) {
    //         case 1:
    //             {
    //                 cout << "play" << endl;
    //             }
    //     }

    // }
    
    return 0;
}