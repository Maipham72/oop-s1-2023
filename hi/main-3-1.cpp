#include "Appliance.h"
#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

int main() {
  House house(2);

  Appliance* tv = new TV(100,200);
  Appliance* fridge = new Fridge(200,100);

  house.addAppliance(tv);
  house.addAppliance(fridge);

  std::cout << "Total consumption: " << house.getTotalPowerConsumption() << std::endl;

  delete tv;
  delete fridge;

  return 0;

}