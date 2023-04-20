#include "Appliance.h"
#include <iostream>

int main() {
  Appliance ap1;
  std::cout << ap1.get_powerRating() << std::endl;

  ap1.turnOff();
  ap1.turnOn();
  std::cout << ap1.getPowerConsumption() << std::endl;

  return 0;
}
