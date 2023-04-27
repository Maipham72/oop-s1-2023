#include "Appliance.h"
#include "Appliance.cpp"
#include <iostream>

int main() {
  Appliance* appliance = new Appliance(100);
  std::cout << "Power rating: " << appliance->get_powerRating() << std::endl;

  appliance->turnOff();
  appliance->turnOn();

  std::cout << "Power consumption: " << appliance->getPowerConsumption() << std::endl;

  delete appliance;

  return 0;
}