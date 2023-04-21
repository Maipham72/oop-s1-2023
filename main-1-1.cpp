#include "Appliance.h"
#include <iostream>

int main() {
  Appliance* appliance;  
  std::cout << appliance->get_powerRating() << std::endl;
  appliance->turnOff();
  appliance->turnOn();
  std::cout << appliance->getPowerConsumption() << std::endl;
  delete appliance;

  return 0;
}
