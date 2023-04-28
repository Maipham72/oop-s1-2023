#include <iostream>
#include "AirFleet.h"
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

int main() {
    AirFleet myFleet;
    AirCraft** myArray = myFleet.get_fleet();

    for(int i = 0; i < 5; i++) {
        std::cout << "Aircraft #" << i << " has weight " << myArray[i]->get_weight() << std::endl;
    }

    return 0;
}