#include <iostream>
#include "TV.h"
#include "Appliance.h"

int main() {
  TV tv(100,200);
  std::cout << "Power consumption when off: " << tv.getPowerConsumption() << std::endl;

  tv.turnOn();
  std::cout << "Power consumption when on: " << tv.getPowerConsumption() << std::endl;

  tv.set_ScreenSize(300);
  std::cout << "Power consumption with bigger volume: " << tv.getPowerConsumption() << std::endl;

  tv.turnOff();
  std::cout << "Power consumption when off: " << tv.getPowerConsumption() << std::endl;

  return 0;
}