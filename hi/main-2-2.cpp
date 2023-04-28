#include "TV.h"
#include "Appliance.h"
#include <iostream>

int main() {
  TV tv(200,300);
  std::cout << "Power consumption when off: " << tv.get_powerRating() << std::endl;

  tv.turnOn();

  std::cout << "Power consumption when on: " << tv.getPowerConsumption() << std::endl;

  tv.set_ScreenSize(400);

  std::cout << "Power consumption bigger screen: " << tv.getPowerConsumption() << std::endl;

  tv.turnOff();

  std::cout << "Power consumption when off: " << tv.getPowerConsumption() << std::endl;

  return 0;
}