#include "Airplane.h"
#include "AirCraft.h"
#include <iostream>

int main() {
  Airplane airplane(5680, 20);
  std::cout << airplane.get_fuel() << std::endl;

  airplane.reducePassengers(10);
  std::cout << airplane.get_fuel() << std::endl;
  std::cout << airplane.get_numberOfFlights() << std::endl;

  return 0;
  
}