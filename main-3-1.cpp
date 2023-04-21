#include <iostream>
#include "Fridge.h"
#include "TV.h"
#include "House.h"
#include "Appliance.h"

int main() {
  House house(2);

  Appliance* tv = new TV(100,200);
  Fridge* fridge = new Fridge(200,100);

  house.addAppliance(tv);
  house.addAppliance(fridge);

  std::cout << "Total consumption: " << house.getTotalPowerConsumption() << std::endl;

  delete tv;
  delete fridge; 

  return 0;
}