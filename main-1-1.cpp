#include "Appliance.h"
#include <iostream>

int main() {
  Appliance* appliance = new Appliance(100);  
  std::cout << appliance.get_powerRating() << std::endl;
  appliance.turnOff();
  appliance.turnOn();
  std::cout << appliance.getPowerConsumption() << std::endl;

  return 0;
}
