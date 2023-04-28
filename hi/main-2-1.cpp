#include "Fridge.h"
#include "Appliance.h"
#include <iostream>

int main() {
  Fridge fridge(100,100);
  std::cout << "Power consumption when off: " << fridge.getPowerConsumption() << std::endl;

  fridge.turnOn();
  std::cout << "Power consumption when on: " << fridge.getPowerConsumption() << std::endl;

  fridge.set_volume(200);
  std::cout << "Power consumption with bigger volune: " << fridge.getPowerConsumption() << std::endl;

  fridge.turnOff();
  std::cout << "Power consumption when off: " << fridge.getPowerConsumption() << std::endl;

  return 0;
}