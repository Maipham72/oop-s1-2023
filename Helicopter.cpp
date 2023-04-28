#include "AirCraft.h"
#include "Helicopter.h"
#include <string>
#include <math.h>
#include <iostream>

Helicopter::Helicopter() {
  std::string name = NULL;
}

Helicopter::Helicopter(int weight, std::string name): AirCraft(weight), name(name) {}

void Helicopter::set_name(std::string name) {
  this->name = name;
}

std::string Helicopter::get_name() {
  return name;
}

void Helicopter::fly(int headwind, int minutes) {
    double fuelUsage = 0.002;

    if (headwind >= 40) {
      fuelUsage = 0.004;
    }

    double extraFuelUsage = 0.0001 * (get_weight() - 5670);

    fuelUsage += extraFuelUsage;

    double fuel = get_fuel();

    if (fuel >= 0.2) {
      fuel -= fuelUsage * minutes;
      set_fuel(fuel);

      if (fuel < 0.2) {
        set_fuel(0.0);
      }

      set_numberOfFlights(get_numberOfFlights() + 1);
    }
}
