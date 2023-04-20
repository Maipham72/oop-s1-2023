#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main() {
  Fridge fridge(100,200);
  std::cout << "Power consumption when off: " << fridge.getPowerConsumption() << std::endl;

  fridge.turnOn();
  std::cout << "Power consumption when on: " << fridge.getPowerConsumption() << std::endl;

  fridge.setVolume(300);
  std::cout << "Power consumption with bigger volume: " << fridge.getPowerConsumption() << std::endl;

  fridge.turnOff();
  std::cout << "Power consumption when off: " << fridge.getPowerConsumption() << std::endl;

  return 0;
}